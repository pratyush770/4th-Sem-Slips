import string,random
from tkinter import *
def password():
    clearAll()
    String=random.sample(string.ascii_letters,6)+random.sample(string.digits,4)
    random.SystemRandom().shuffle(String)
    password=''.join(String)  #converts the tuple into string format
    passField.insert(10,str(password)) #returns in tuple format but got converted into string bcoz of the above line
def clearAll():
    passField.delete(0,END)
if __name__=="__main__":
    gui=Tk()
    gui.configure(background="light green")
    gui.title("Random Password Maker")
    gui.geometry("325x150")
    passin=Label(gui,text="Password",bg="white").pack()
    passField=Entry(gui)
    passField.pack()
    result=Button(gui,text="Result",fg="Black",bg="gray",command=password).pack()
    clearAllEntry=Button(gui,text="Clear All",fg="Black",bg="Red",command=clearAll).pack()
    gui.mainloop()