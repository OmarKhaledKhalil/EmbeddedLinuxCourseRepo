#!/usr/bin/python3
import tkinter as tk
import math
root=tk.Tk()
 
# setting the windows size
root.geometry("800x800")
  
# declaring string variable
# for storing the input number
Num_var=tk.IntVar()

 
  
# defining a function that will
# get the input number and represent its Factorial

def FACT():
 
    Num=Num_var.get()
    Fact_str=(str)(math.factorial(Num))
    rev_string_label = tk.Label(root, text = Fact_str, font=('calibre',10, 'bold'))
    rev_string_label.grid(row=3,column=0)
    
     
    Num_var.set("")
     
     
# creating a labels for
# Input Number widget Label
Num_label = tk.Label(root, text = 'Input Num', font=('calibre',10, 'bold'))


  
# creating  entries for inputs
# Input Number widget Entry

Num_entry = tk.Entry(root,textvariable = Num_var, font=('calibre',10,'normal'))


# creating a button using the widget
# Button that will call the Factorial function
sub_btn=tk.Button(root,text = 'Get Fact', command = FACT)
  
# placing the labels and entries in
# the required positions using grid
Num_label.grid(row=0,column=0)
Num_entry.grid(row=0,column=3)
sub_btn.grid(row=2,column=1)
  
# performing an infinite loop
# for the window to display
root.mainloop()