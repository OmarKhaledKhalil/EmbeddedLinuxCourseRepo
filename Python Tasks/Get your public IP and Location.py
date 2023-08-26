#!/usr/bin/python3

import requests

response=requests.get('https://api.ipify.org/?format=json')

if response.status_code == 200:
    data=response.json()


print("Your Public ID is : " + data["ip"])

import urllib.parse

#Trying to convert this url to string 

url = "https://ipinfo.io/-/geo"
string = urllib. parse. unquote(url)

#Adding the IP Address to the URL after converting it to string 

new_string = string.replace("-", data["ip"])

response=requests.get(new_string)

#Printing the Location Data line by line

if response.status_code == 200:
    data=response.json()
    for i in data:
        print(i,end=': ')
        print(data[i])





