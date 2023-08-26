#!/usr/bin/python3

import requests

response=requests.get('https://api.ipify.org/?format=json')

if response.status_code == 200:
    data=response.json()


print("Your Public ID is : " + data["ip"])

