#!/usr/bin/python3

file=open("/home/omar/Desktop/New Folder/Text.txt","r") #put your own TEXT path here 

st=file.read() #Reading the whole file and return it into String

ls=st.split()  #Split each word , and create list of strings of each word

print(ls)      #print this list

print(len(ls)) #print the number of words exists
