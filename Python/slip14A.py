from tkinter import *
from math import pi
from tkinter import messagebox
def clearAll():
    RadiusField.delete(0,END)
    HeightField.delete(0,END)
    VolumeField.delete(0,END)
    AreaField.delete(0,END)
def checkError():
    if(RadiusField.get()=="" or HeightField.get()==""):
        messagebox.showerror("Input Error")
        clearAll()
        return -1
def result():
    value=checkError()
    if value==-1:
        return
    else:
        Radius=int(RadiusField.get())
        Height=int(HeightField.get())
        volume=round(pi*Height*Radius**2,2)
        area=round((2*pi*Radius*Height)+(2*pi*Radius**2),2)
        VolumeField.insert(10,str(volume))
        AreaField.insert(10,str(area))
if __name__=="__main__":
    gui=Tk()
    gui.configure(background="light green")
    gui.title("Find volume and area of cylinder")
    gui.geometry("300x175")
    radius=Label(gui,text="Enter the radius",fg="white",bg="blue")
    height=Label(gui,text="Enter the height",fg="white",bg="blue")
    area=Label(gui,text="Area",fg="white",bg="blue")
    volume=Label(gui,text="Volume",fg="white",bg="blue")
    resultbutton=Button(gui,text="Result",bg="black",fg="white",command=result)
    clearallentry=Button(gui,text="Clear All",bg="black",fg="white",command=clearAll)
    RadiusField=Entry(gui)
    HeightField=Entry(gui)
    VolumeField=Entry(gui)
    AreaField=Entry(gui)
    radius.grid(row=0,column=0)
    height.grid(row=0,column=2)
    area.grid(row=2,column=0)
    volume.grid(row=2,column=2)
    resultbutton.grid(row=5,column=1)
    RadiusField.grid(row=1,column=0)
    HeightField.grid(row=1,column=2)
    AreaField.grid(row=3,column=0)
    VolumeField.grid(row=3,column=2)
    clearallentry.grid(row=6,column=1)
    gui.mainloop()
