"""
Script that syncs networks JSON with the current list of networks on chainid.network

Update the networks_file by running this script:

.. code-block:: shell

    $ python update_networks.py

After running the command, check the output in the networks_file.
If all looks good, open a PR with the changes.
"""

import urllib.request

networks_file = "./eth_utils/__json/eth_networks.json"

with urllib.request.urlopen("https://chainid.network/chains_mini.json") as response:
    content = response.read().decode()

with open(networks_file, "w") as open_file:
    open_file.write(content)

print("Networks have updated! Please review and open a PR with the changes.")