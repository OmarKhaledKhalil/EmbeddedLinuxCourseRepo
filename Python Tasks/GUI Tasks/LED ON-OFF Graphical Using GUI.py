#!/usr/bin/python3
import tkinter as tk


 
#Creating and  setting the windows size
root=tk.Tk()
root.geometry("400x400")

# defining functions that will act as per pushing each button

def ON_Cond():
 
 #Action when On Push Button is Pressed.

   my_canvas.itemconfig(my_oval, fill="red")
  
    
def OFF_Cond():
 
  #Action when OFF Push Button is Pressed.

    my_canvas.itemconfig(my_oval, fill="")
   
# creating Circular Shape representing the LED and Two Buttons (ON,OFF) using the widget

my_canvas = tk.Canvas(root, width=200, height=200)  # Create 200x200 Canvas widget
my_oval = my_canvas.create_oval(50, 50, 100, 100) 
ON_btn = tk.Button(root,text = 'LED_ON', command = ON_Cond)
OFF_btn= tk.Button(root,text = 'LED_OFF', command = OFF_Cond)


# placing the labels and entries in

my_canvas.pack()
ON_btn.pack()
OFF_btn.pack()


# performing an infinite loop , for the window to display
root.mainloop()
