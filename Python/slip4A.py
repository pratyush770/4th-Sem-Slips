from tkinter import *
def changecolor():
    newvalue=value.get()
    gui.configure(background=newvalue)
gui=Tk()
gui.title("Color Change")
gui.configure(background="light grey")
gui.geometry("525x260")
color=Label(gui,text="Color",fg="white",bg="black")
value=Entry(gui)
apply=Button(gui,text="Apply",fg="white",bg="black",command=changecolor)
color.grid(row=0,column=1)
value.grid(row=0,column=2)
apply.grid(row=0,column=3)
gui.mainloop()

