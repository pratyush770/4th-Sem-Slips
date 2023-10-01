from tkinter import *
def printWord(N):
    i=0
    length=len(N)
    while i<length:
        printValue(N[i])
        i+=1
def printValue(digit):
    if digit=='0':
        wordField.insert(30,'ZERO')
    elif digit=='1':
        wordField.insert(30,'ONE')
    elif digit=='2':
        wordField.insert(30,'TWO')
    elif digit=='3':
        wordField.insert(30,'THREE')
    elif digit=='4':
        wordField.insert(30,'FOUR')
    elif digit=='5':
        wordField.insert(30,'FIVE')
    elif digit=='6':
        wordField.insert(30,'SIX')
    elif digit=='7':
        wordField.insert(30,'SEVEN')
    elif digit=='8':
        wordField.insert(30,'EIGHT')
    elif digit=='9':
        wordField.insert(30,'NINE')
def clearAll():
    numberField.delete(0,END)
    wordField.delete(0,END)
def wordconvert():
    number0=numberField.get()
    printWord(number0)
if __name__=="__main__":
    gui=Tk()
    gui.configure(background="light green")
    gui.title("Decimal number convert")
    gui.geometry("300x125")
    number=Label(gui,text="Enter a number",bg="blue",fg="white")
    numberinword=Label(gui,text="Number in word",bg="blue",fg="white")
    numberField=Entry(gui)
    wordField=Entry(gui)
    resultbutton=Button(gui,text="Result",bg="red",fg="white",command=wordconvert)
    clearallentry=Button(gui,text="Clear All",bg="red",fg="white",command=clearAll)
    number.grid(row=0,column=1)
    numberinword.grid(row=0,column=5)
    numberField.grid(row=1,column=1)
    wordField.grid(row=1,column=5)
    resultbutton.grid(row=2,column=1)
    clearallentry.grid(row=2,column=5)
gui.mainloop()

