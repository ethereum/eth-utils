from typing import Final

try:
    import cytoolz
    cy = True
except ImportError:
    import toolz
    cy = False


accumulate: Final = cytoolz.accumulate if cy else toolz.accumulate
assoc: Final = cytoolz.assoc if cy else toolz.assoc
assoc_in: Final = cytoolz.assoc_in if cy else toolz.assoc_in
comp: Final = cytoolz.comp if cy else toolz.comp
complement: Final = cytoolz.complement if cy else toolz.complement
compose: Final = cytoolz.compose if cy else toolz.compose
concat: Final = cytoolz.concat if cy else toolz.concat
concatv: Final = cytoolz.concatv if cy else toolz.concatv
cons: Final = cytoolz.cons if cy else toolz.cons
count: Final = cytoolz.count if cy else toolz.count
countby: Final = cytoolz.countby if cy else toolz.countby
curried: Final = cytoolz.curried if cy else toolz.curried
curry: Final = cytoolz.curry if cy else toolz.curry
dicttoolz: Final = cytoolz.dicttoolz if cy else toolz.dicttoolz
diff: Final = cytoolz.diff if cy else toolz.diff
dissoc: Final = cytoolz.dissoc if cy else toolz.dissoc
do: Final = cytoolz.do if cy else toolz.do
drop: Final = cytoolz.drop if cy else toolz.drop
excepts: Final = cytoolz.excepts if cy else toolz.excepts
filter: Final = cytoolz.filter if cy else toolz.filter
first: Final = cytoolz.first if cy else toolz.first
flip: Final = cytoolz.flip if cy else toolz.flip
frequencies: Final = cytoolz.frequencies if cy else toolz.frequencies
functoolz: Final = cytoolz.functoolz if cy else toolz.functoolz
get: Final = cytoolz.get if cy else toolz.get
get_in: Final = cytoolz.get_in if cy else toolz.get_in
groupby: Final = cytoolz.groupby if cy else toolz.groupby
identity: Final = cytoolz.identity if cy else toolz.identity
interleave: Final = cytoolz.interleave if cy else toolz.interleave
interpose: Final = cytoolz.interpose if cy else toolz.interpose
isdistinct: Final = cytoolz.isdistinct if cy else toolz.isdistinct
isiterable: Final = cytoolz.isiterable if cy else toolz.isiterable
itemfilter: Final = cytoolz.itemfilter if cy else toolz.itemfilter
itemmap: Final = cytoolz.itemmap if cy else toolz.itemmap
iterate: Final = cytoolz.iterate if cy else toolz.iterate
itertoolz: Final = cytoolz.itertoolz if cy else toolz.itertoolz
join: Final = cytoolz.join if cy else toolz.join
juxt: Final = cytoolz.juxt if cy else toolz.juxt
keyfilter: Final = cytoolz.keyfilter if cy else toolz.keyfilter
keymap: Final = cytoolz.keymap if cy else toolz.keymap
last: Final = cytoolz.last if cy else toolz.last
map: Final = cytoolz.map if cy else toolz.map
mapcat: Final = cytoolz.mapcat if cy else toolz.mapcat
memoize: Final = cytoolz.memoize if cy else toolz.memoize
merge: Final = cytoolz.merge if cy else toolz.merge
merge_sorted: Final = cytoolz.merge_sorted if cy else toolz.merge_sorted
merge_with: Final = cytoolz.merge_with if cy else toolz.merge_with
nth: Final = cytoolz.nth if cy else toolz.nth
partial: Final = cytoolz.partial if cy else toolz.partial
partition: Final = cytoolz.partition if cy else toolz.partition
partition_all: Final = cytoolz.partition_all if cy else toolz.partition_all
partitionby: Final = cytoolz.partitionby if cy else toolz.partitionby
peek: Final = cytoolz.peek if cy else toolz.peek
pipe: Final = cytoolz.pipe if cy else toolz.pipe
pluck: Final = cytoolz.pluck if cy else toolz.pluck
random_sample: Final = cytoolz.random_sample if cy else toolz.random_sample
recipes: Final = cytoolz.recipes if cy else toolz.recipes
reduce: Final = cytoolz.reduce if cy else toolz.reduce
reduceby: Final = cytoolz.reduceby if cy else toolz.reduceby
remove: Final = cytoolz.remove if cy else toolz.remove
second: Final = cytoolz.second if cy else toolz.second
sliding_window: Final = cytoolz.sliding_window if cy else toolz.sliding_window
sorted: Final = cytoolz.sorted if cy else toolz.sorted
tail: Final = cytoolz.tail if cy else toolz.tail
take: Final = cytoolz.take if cy else toolz.take
take_nth: Final = cytoolz.take_nth if cy else toolz.take_nth
thread_first: Final = cytoolz.thread_first if cy else toolz.thread_first
thread_last: Final = cytoolz.thread_last if cy else toolz.thread_last
topk: Final = cytoolz.topk if cy else toolz.topk
unique: Final = cytoolz.unique if cy else toolz.unique
update_in: Final = cytoolz.update_in if cy else toolz.update_in
utils: Final = cytoolz.utils if cy else toolz.utils
valfilter: Final = cytoolz.valfilter if cy else toolz.valfilter
valmap: Final = cytoolz.valmap if cy else toolz.valmap
