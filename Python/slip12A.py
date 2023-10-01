import tkinter as tk
parent=tk.Tk()
parent.title("Tkinter")
my_label=tk.Label(parent,text="Hello",font=("Arial Bold",70,"bold"))
my_label.grid(column=0,row=0)
parent.mainloop()