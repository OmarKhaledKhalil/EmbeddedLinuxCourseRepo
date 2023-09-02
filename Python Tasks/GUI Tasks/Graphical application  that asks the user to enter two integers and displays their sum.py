#!/usr/bin/python3
import tkinter as tk
  
root=tk.Tk()
 
# setting the windows size
root.geometry("400x200")
  
# declaring string variable
# for storing the input 2 numbers
First_Num_var=tk.IntVar()
Second_Num_var=tk.IntVar()
 
  
# defining a function that will
# get the 2 input numbers and represent their sum

def SUM():
 
    First_Num=First_Num_var.get()
    Second_Num=Second_Num_var.get()
    Sum_str=(str)(First_Num+Second_Num)
    rev_string_label = tk.Label(root, text = Sum_str, font=('calibre',10, 'bold'))
    rev_string_label.grid(row=3,column=0)
    
     
    First_Num_var.set("")
    Second_Num_var.set("")
     
     
# creating a labels for
# "First Number" widget Label
# "Second Number" widget Label
First_Num_label = tk.Label(root, text = 'First Num', font=('calibre',10, 'bold'))
Second_Num_label = tk.Label(root, text = 'Second Num', font=('calibre',10, 'bold'))

  
# creating  entries for inputs
# "First Number" widget Entry
# "Second Number" widget Entry
First_Num_entry = tk.Entry(root,textvariable = First_Num_var, font=('calibre',10,'normal'))
Second_Num_entry = tk.Entry(root,textvariable = Second_Num_var, font=('calibre',10,'normal'))

# creating a button using the widget
# Button that will call the SUM function
sub_btn=tk.Button(root,text = 'Get Sum', command = SUM)
  
# placing the labels and entries in
# the required positions using grid
First_Num_label.grid(row=0,column=0)
Second_Num_label.grid(row=1,column=0)
First_Num_entry.grid(row=0,column=3)
Second_Num_entry.grid(row=1,column=3)
sub_btn.grid(row=2,column=1)
  
# performing an infinite loop
# for the window to display
root.mainloop()