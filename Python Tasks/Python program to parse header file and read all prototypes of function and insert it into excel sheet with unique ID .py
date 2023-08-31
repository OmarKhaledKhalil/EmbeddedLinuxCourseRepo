#!/usr/bin/python3
import openpyxl

#Creating a Workbook.
workbook = openpyxl.Workbook()

#Creating a New Sheet.
newsheet = workbook.create_sheet(title="Functions Prototype")


#Opening The Header File for Reading it, line by line.

Header_file=open('''Put the path here of the header file''',"r")

Header_line=Header_file.readlines()

#Creating List of Lists as a buffer in order to fill them in excel sheet with the data needed.
data= [["Functions Prototype","Unique ID"],
       ["",""],
       ["",""],
       ["",""],
       ["",""],
       ["",""],
       ["",""],
       ["",""],
       ["",""],
       ["",""],
]

# Index = 1 to fill data after the PATTERN.
i=1
id_str="0x0"

# Finding The Functions Prototypes from the file  and fill them in the buffer , as well as the unique ID.
for line in Header_line:
    if ';' in line:
        line.replace("\n","")
        data[i][0]=line.strip()
        data[i][1]=id_str+str(i)
        
        i=i+1

#Appending the Sheet with the Data buffer.
for row in data:
    newsheet.append(row)

#Saving the Excel File in a certain path.
workbook.save('''Put the path here to save ''')
