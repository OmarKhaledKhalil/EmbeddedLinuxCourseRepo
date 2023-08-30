#!/usr/bin/python3

while 1 : #Super-loop to keep taking inputs and give results.

    character = input(" Please Input the Character(only one character): ") #Taking input from user.
    print("\nThe ASCI Value of This Character is " , end=" ")
    
    print(ord(character[0])) #Handling situation if the user input 2 or more characters beside each other.
    print("\n\n")