# GUI practice
#Basic operations of 2 numbers
from tkinter import *
from tkinter import messagebox
def clearAll():
    num1Field.delete(0,END)
    num2Field.delete(0,END)
    addField.delete(0,END)
    subField.delete(0,END)
    mulField.delete(0,END)
    divField.delete(0,END)
def checkError():
    if(num1Field.get()=="" or num2Field.get()==""):
        messagebox.showerror("Error")
        clearAll()
        return -1
def addnum():
    value=checkError()
    if value==-1:
        return
    else:
        num1=int(num1Field.get())
        num2=int(num2Field.get())
        addn=num1+num2
    addField.insert(10,str(addn))
def subnum():
    num1=int(num1Field.get())
    num2=int(num2Field.get())
    subn=num2-num1
    subField.insert(10,str(subn))
def mulnum():
    num1=int(num1Field.get())
    num2=int(num2Field.get())
    muln=num1*num2
    mulField.insert(10,str(muln))
def divnum():
    num1=int(num1Field.get())
    num2=int(num2Field.get())
    divn=num2//num1
    divField.insert(10,str(divn))
if __name__=="__main__":
    gui=Tk()
    gui.title("Number operations")
    gui.configure(background="light green")
    gui.geometry("250x200")
    num3=Label(gui,text="Enter 1st number",bg="blue",fg="white")
    num4=Label(gui,text="Enter 2nd number",bg="blue",fg="white")
    result1=Label(gui,text="Addition",bg="red",fg="white")
    result2=Label(gui,text="Subtraction",bg="red",fg="white")
    result3=Label(gui,text="Multiplication",bg="red",fg="white")
    result4=Label(gui,text="Division",bg="red",fg="white")
    finalresult=Button(gui,text="Calculate",bg="black",fg="white",command=lambda:[addnum(),subnum(),mulnum(),divnum()])
    clearallentry=Button(gui,text="Clear All",bg="black",fg="white",command=clearAll)
    num1Field=Entry(gui)
    num2Field=Entry(gui)
    addField=Entry(gui)
    subField=Entry(gui)
    mulField=Entry(gui)
    divField=Entry(gui)
    num3.grid(row=0,column=0)
    num1Field.grid(row=0,column=1)
    num4.grid(row=1,column=0)
    num2Field.grid(row=1,column=1)
    addField.grid(row=2,column=1)
    result1.grid(row=2,column=0)
    subField.grid(row=3,column=1)
    result2.grid(row=3,column=0)
    mulField.grid(row=4,column=1)
    result3.grid(row=4,column=0)
    divField.grid(row=5,column=1)
    result4.grid(row=5,column=0)
    finalresult.grid(row=6,column=0)
    clearallentry.grid(row=6,column=1)
gui.mainloop()
