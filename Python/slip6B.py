import tkinter as tk
import tkinter.font as tkFont
class App:
    def __init__(self):
        root=tk.Tk()
        self.customFont=tkFont.Font(family="Helvetica",size=12)
        buttonframe=tk.Frame()
        label=tk.Label(root,text="Hello world",font=self.customFont)
        text=tk.Text(root,width=20,height=2,font=self.customFont)
        buttonframe.pack(side="top",fill="x")
        label.pack()
        text.pack()
        text.insert("end","Press +/- buttons to change\n font size")
        bigger=tk.Button(root,text="+",command=self.OnBigger)
        smaller=tk.Button(root,text="-",command=self.OnSmaller)
        bigger.pack(in_=buttonframe,side="left")
        smaller.pack(in_=buttonframe,side="left")
        root.mainloop()
    def OnBigger(self):
        size1=self.customFont['size']
        self.customFont.configure(size=size1+2)
    def OnSmaller(self):
        size1=self.customFont['size']
        self.customFont.configure(size=size1-2)
app=App()


