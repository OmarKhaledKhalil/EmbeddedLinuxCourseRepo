#!/usr/bin/python3

import requests

url=requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")

#converting the reciecing data to JSON file , then print the values of 'bpi' Key and 'USD' key
print(url.json()['bpi']['USD'])
        

