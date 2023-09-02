#!/usr/bin/python3
from tkinter import *

#Creating window with adjusting Gemotry and Location on Screen.
window=Tk()
window.title("Buttons")
window.geometry("210x100+700+200")

#Call Back Function to be Called when a Button is Pressed.

def PRINT (but="0"):
    txt="Button {} is Pressed"
    print(txt.format(but))

#Creating 4 Buttons with specific command when button is Pressed for each .

button1=Button(window,text='Button1',width=5,command=lambda:PRINT("1"))
button2=Button(window,text='Button2',width=5,command=lambda:PRINT("2"))
button3=Button(window,text='Button3',width=5,command=lambda:PRINT("3"))
button4=Button(window,text='Button4',width=5,command=lambda:PRINT("4"))

#Inserting Buttons on the Window by Grid Method.

button1.grid(row=1,column=3)
button2.grid(row=3,column=1)
button3.grid(row=3,column=4)
button4.grid(row=5,column=3)

#Making Super Loop to Make the Program Runs till terminates.

window.mainloop()
