#!/usr/bin/python3
import tkinter as tk
  
root=tk.Tk()
 
# setting the windows size
root.geometry("400x200")
  
# declaring string variable
# for storing the input string
string_var=tk.StringVar()

 
  
# defining a function that will
# get the input string and rerverse it and show on screen the reversed string as a label

def REV():
 
    old_str=string_var.get()

    rev_string_label = tk.Label(root, text = old_str[::-1], font=('calibre',10, 'bold'))
    rev_string_label.grid(row=3,column=0)
    
     
    string_var.set("")
   
     
     
# creating a label for
# "input string" widget Label
string_label = tk.Label(root, text = 'Input String', font=('calibre',10, 'bold'))
  
# creating a entry for input
# "input string" widget Entry
string_entry = tk.Entry(root,textvariable = string_var, font=('calibre',10,'normal'))
  

# creating a button using the widget
# Button that will call the REV function
sub_btn=tk.Button(root,text = 'Reverse', command = REV)
  
# placing the label and entry in
# the required position using grid
string_label.grid(row=0,column=0)
string_entry.grid(row=0,column=3)
sub_btn.grid(row=2,column=1)
  
# performing an infinite loop
# for the window to display
root.mainloop()