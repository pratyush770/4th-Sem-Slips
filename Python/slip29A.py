from tkinter import *
from tkinter import messagebox
import math
def clearAll():
    radiusField.delete(0,END)
    volumeField.delete(0,END)
def checkError():
    if(radiusField.get()==""):
        messagebox.showerror("Error")
        clearAll()
        return -1
def getvolume():
    value=checkError()
    if value==-1:
        return
    else:
        radius0=int(radiusField.get())
        volume0=round((4/3)*math.pi*radius0*radius0*radius0,2)
        volumeField.insert(10,str(volume0))
if __name__=="__main__":
    gui=Tk()
    gui.configure(background="light green")
    gui.title("Volume of sphere")
    gui.geometry("250x200")
    radius1=Label(gui,text="Enter radius",bg="blue",fg="white")
    volume1=Label(gui,text="Volume",bg="blue",fg="white")
    radiusField=Entry(gui)
    volumeField=Entry(gui)
    result=Button(gui,text="Calculate",bg="black",fg="white",command=getvolume)
    clearallentry=Button(gui,text="Clear",bg="black",fg="white",command=clearAll)
    radius1.grid(row=0,column=0)
    radiusField.grid(row=0,column=1)
    volume1.grid(row=1,column=0)
    volumeField.grid(row=1,column=1)
    result.grid(row=2,column=0)
    clearallentry.grid(row=2,column=1)
gui.mainloop()
        