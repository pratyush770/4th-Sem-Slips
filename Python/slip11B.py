from tkinter import *
def redcolor():
    root.configure(background="red")
def greencolor():
    root.configure(background="green")
def yellowcolor():
    root.configure(background="yellow")
def violetcolor():
    root.configure(background="violet")
def bluecolor():
    root.configure(background="blue")
def cyancolor():
    root.configure(background="cyan")
root=Tk()
root.title("Changing colors")
root.geometry("250x200")
menubar=Menu(root)
color=Menu(menubar,tearoff=0)
menubar.add_cascade(label="Color",menu=color)
color.add_command(label="Red",command=redcolor,activebackground="red",activeforeground="white")
color.add_command(label="Green",command=greencolor,activebackground="green",activeforeground="white")
color.add_command(label="Yellow",command=yellowcolor,activebackground="yellow",activeforeground="black")
color.add_command(label="Violet",command=violetcolor,activebackground="violet",activeforeground="white")
color.add_command(label="Blue",command=bluecolor,activebackground="blue",activeforeground="white")
color.add_command(label="Cyan",command=cyancolor,activebackground="cyan",activeforeground="black")
color.add_command(label="Exit",command=root.destroy)
root.config(menu=menubar)
root.mainloop()

