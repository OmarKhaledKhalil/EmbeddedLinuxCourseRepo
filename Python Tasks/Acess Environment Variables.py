#include OS Module to Access Environment Variables
import os
 
#Method to print Environment Variables 
#os.environ is a dict contains all Environment Variables and its values.

for k, v in os.environ.items():
    print(f'{k}={v}')