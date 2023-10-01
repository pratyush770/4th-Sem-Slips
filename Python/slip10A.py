import tkinter.messagebox
def onClick():
    tkinter.messagebox.showinfo("Title goes here","Message goes here")
root=tkinter.Tk()
root.title("Alert box")
root.configure(background="pink")
root.geometry("250x100")
button=tkinter.Button(root,text="Click Me",bg="red",fg="white",command=onClick)
button.pack()
root.mainloop()