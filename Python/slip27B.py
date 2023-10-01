from tkinter import *
from tkinter import messagebox
def clearAll():
    numberField.delete(0,END)
    binaryField.delete(0,END)
    octalField.delete(0,END)
    hexadecimalField.delete(0,END)
def checkError():
    if(numberField.get()==""):
        messagebox.showerror("Error")
        clearAll()
        return -1
def calculate():
    value=checkError()
    if value==-1:
        return
    else:
        number0=int(numberField.get())
        binary=(bin(number0)[2:])
        octal=(oct(number0)[2:])
        hexadecimal=(hex(number0)[2:])
        binaryField.insert(10,str(binary))
        octalField.insert(10,str(octal))
        hexadecimalField.insert(10,str(hexadecimal))
if __name__=="__main__":
    gui=Tk()
    gui.configure(background="light green")
    gui.title("Decimal number converter")
    gui.geometry("380x200")
    number=Label(gui,text="Enter number",bg="blue",fg="white")
    resultbin=Label(gui,text="Result Binary",bg="blue",fg="white")
    resultoct=Label(gui,text="Result Octal",bg="blue",fg="white")
    resulthex=Label(gui,text="Result Hexadecimal",bg="blue",fg="white")
    result=Button(gui,text="Convert",bg="black",fg="white",command=calculate)
    clearallentry=Button(gui,text="Clear All",bg="black",fg="white",command=clearAll)
    numberField=Entry(gui)
    binaryField=Entry(gui)
    octalField=Entry(gui)
    hexadecimalField=Entry(gui)
    number.grid(row=0,column=0)
    numberField.grid(row=0,column=1)
    resultbin.grid(row=1,column=0)
    resultoct.grid(row=1,column=1)
    resulthex.grid(row=1,column=2)
    binaryField.grid(row=2,column=0)
    octalField.grid(row=2,column=1)
    hexadecimalField.grid(row=2,column=2)
    result.grid(row=3,column=0)
    clearallentry.grid(row=3,column=2)
gui.mainloop()


