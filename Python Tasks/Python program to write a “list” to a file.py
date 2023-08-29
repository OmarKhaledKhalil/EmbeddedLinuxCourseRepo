#!/usr/bin/python3

Animals=['Cat','Dog','Lion','Rat','Tiger']                          #creating list of strings to insert in the text file

with open('/home/omar/Desktop/New Folder/Text.txt',"w") as myfile : #Putting your own Text file path , joining the list of strings to the empty file
       myfile.write(" ".join(Animals))

checker  = open('/home/omar/Desktop/New Folder/Text.txt')           #opening the file and read it , return is string

print(checker.read()) #printing the content
