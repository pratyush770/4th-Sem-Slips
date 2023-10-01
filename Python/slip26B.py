from tkinter import *
from tkinter import messagebox
def clearAll():
    str1Field.delete(0,END)
    altersField.delete(0,END)
def checkError():
    if(str1Field.get()==""):
        messagebox.showerror("Error")
        clearAll()
        return -1
def occurences():
    value=checkError()
    if(value==-1):
        return
    else:
        String0=(str1Field.get())
        newstr=""
        for char in String0:
            if char.isupper():
                char=char.lower()
                newstr+=char
            elif char.islower():
                char=char.upper()
                newstr+=char
            elif char==' ':
                char=char.replace(' ','*')
                newstr+=char
            elif char.isdigit():
                char=char.replace(char,'?')
                newstr+=char
            else:
                newstr+=char
        altersField.insert(10,str(newstr))
if __name__=="__main__":
    gui=Tk()
    gui.configure(background="light green")
    gui.title("Alteration")
    gui.geometry("250x200")
    str1=Label(gui,text="Enter string",bg="blue",fg="white")
    alters=Label(gui,text="Altered string",bg="blue",fg="white")
    str1Field=Entry(gui)
    altersField=Entry(gui)
    result=Button(gui,text="Result",bg="black",fg="white",command=occurences)
    clearallentry=Button(gui,text="Clear All",bg="black",fg="white",command=clearAll)
    str1.grid(row=0,column=1)
    str1Field.grid(row=0,column=2)
    alters.grid(row=1,column=1)
    altersField.grid(row=1,column=2)
    result.grid(row=2,column=1)
    clearallentry.grid(row=2,column=2)
gui.mainloop()
