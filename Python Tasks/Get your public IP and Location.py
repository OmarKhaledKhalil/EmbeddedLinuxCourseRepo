#!/usr/bin/python3

import requests

response=requests.get('https://api.ipify.org/?format=json')

if response.status_code == 200:
    data=response.json()


print("Your Public ID is : " + data["ip"])

import urllib.parse

url = "https://ipinfo.io/-/geo"
string = urllib. parse. unquote(url)


new_string = string.replace("-", data["ip"])

response=requests.get(new_string)

if response.status_code == 200:
    data=response.json()
    for i in data:
        print(i,end=': ')
        print(data[i])





