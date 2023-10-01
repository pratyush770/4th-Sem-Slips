from tkinter import *
from tkinter import messagebox
def clearAll():
    str1Field.delete(0,END)
    char1Field.delete(0,END)
    result1Field.delete(0,END)
def checkError():
    if(str1Field.get()=="" or char1Field.get()==""):
        messagebox.showerror("Error")
        clearAll()
        return -1
def occurence():
    value=checkError()
    if value==-1:
        return
    else:
        str1=(str1Field.get())
        char1=(char1Field.get())
        i=0
        count=0
        while(i<len(str1)):
            if(str1[i]==char1):
                count=count+1
            i=i+1
        result1Field.insert(10,str(count))
if __name__=="__main__":
    gui=Tk()
    gui.title("Count characters")
    gui.geometry("250x200")
    gui.configure(background="light green")
    str2=Label(gui,text="Enter string",bg="blue",fg="white")
    char2=Label(gui,text="Enter character",bg="blue",fg="white")
    occ=Label(gui,text="Occurence",bg="blue",fg="white")
    result=Button(gui,text="Check",bg="black",fg="white",command=occurence)
    clearallentry=Button(gui,text="Clear",bg="black",fg="white",command=clearAll)
    str1Field=Entry(gui)
    char1Field=Entry(gui)
    result1Field=Entry(gui)
    str2.grid(row=0,column=0)
    str1Field.grid(row=0,column=1)
    char2.grid(row=1,column=0)
    char1Field.grid(row=1,column=1)
    occ.grid(row=2,column=0)
    result1Field.grid(row=2,column=1)
    result.grid(row=3,column=0)
    clearallentry.grid(row=3,column=1)
gui.mainloop()