#!/usr/bin/python3
import requests

response=requests.get('https://www.boredapi.com/api/activity')

if response.status_code==200:
    data= response.json()

#Printing the activity and its type to the user.

print("The Activity is : "+data["activity"])
print("Type of This Activity is : "+data["type"])

#Checks if there is a helper link and print it if any.
if data["link"] == True:
    print("Helper Link : "+data["link"])