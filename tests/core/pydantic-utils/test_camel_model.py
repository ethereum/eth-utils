from pydantic import (
    Field,
)

from faster_eth_utils.pydantic import (
    CamelModel,
)


class PydanticTestClass(CamelModel):
    field_five: int = 5
    field_six: str = "6"
    field_seven: str = Field(default="7", exclude=True)
    field_eight: int = Field(default=8, exclude=True)


class NestedPydanticTestClass(CamelModel):
    field_one: int = 1
    field_two: str = "2"
    field_three: str = Field(default="3", exclude=True)
    field_four: PydanticTestClass = PydanticTestClass()


def test_camel_model_dump():
    dump_alias = PydanticTestClass().model_dump(by_alias=True)
    dump = PydanticTestClass().model_dump()
    assert dump_alias == {"fieldFive": 5, "fieldSix": "6"}
    assert dump == {"field_five": 5, "field_six": "6"}

    dump_alias_nested = NestedPydanticTestClass().model_dump(by_alias=True)
    dump_nested = NestedPydanticTestClass().model_dump()
    assert dump_alias_nested == {
        "fieldOne": 1,
        "fieldTwo": "2",
        "fieldFour": {"fieldFive": 5, "fieldSix": "6"},
    }
    assert dump_nested == {
        "field_one": 1,
        "field_two": "2",
        "field_four": {"field_five": 5, "field_six": "6"},
    }


def test_camel_model_json_schema():
    schema = PydanticTestClass().model_json_schema(by_alias=True)
    assert isinstance(schema, dict)
    properties = schema["properties"]
    assert len(properties) == 2
    assert all(field in properties for field in {"fieldFive", "fieldSix"})
    assert "fieldSix" in properties
    field_5_props = {"title": "Fieldfive", "type": "integer", "default": 5}
    assert properties["fieldFive"] == field_5_props
    field_6_props = {"title": "Fieldsix", "type": "string", "default": "6"}
    assert properties["fieldSix"] == field_6_props

    schema_nested = NestedPydanticTestClass().model_json_schema(by_alias=True)
    assert isinstance(schema_nested, dict)
    properties_nested = schema_nested["properties"]
    assert len(properties_nested) == 3
    assert all(
        field in properties_nested for field in {"fieldOne", "fieldTwo", "fieldFour"}
    )
    assert properties_nested["fieldOne"] == {
        "title": "Fieldone",
        "type": "integer",
        "default": 1,
    }
    assert properties_nested["fieldTwo"] == {
        "title": "Fieldtwo",
        "type": "string",
        "default": "2",
    }
    assert properties_nested["fieldFour"] == {
        "$ref": "#/$defs/PydanticTestClass",
        "default": {"fieldFive": 5, "fieldSix": "6"},
    }
    # assert the reference to the nested model properties
    assert schema_nested["$defs"]["PydanticTestClass"]["properties"] == properties
