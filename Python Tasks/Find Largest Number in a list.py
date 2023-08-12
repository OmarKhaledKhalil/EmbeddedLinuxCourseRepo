#!/usr/bin/python3

#Input List by user as a string , then convert it to list of integers and sort this list

str=input("Please Input the List Elements Sperated by Space")
lis=str.split(" ")
res = [eval(i) for i in lis]
res.sort()

#Print the last element in the list which must be the largest in value after sorting

print(res[-1])

        

