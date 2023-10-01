tup1=(('333','33'),('1416','55'))
a,b=tup1
newlistA=[]
newlistB=[]
arr=[]
for i in a:
    newlistA.append(int(i))
arr.append(newlistA)
for i in b:
    newlistB.append(int(i))
arr.append(newlistB)
finaltup=tuple(map(tuple,arr))
print(finaltup)
# from tkinter import *
# def say_hi():
#     print("Hello")
# root=Tk()
# frame1=Frame(root)
# frame2=Frame(root)
# root.title("Tkinter frame")
# root.geometry("200x100")
# label=Label(frame1,text="Label")
# label.pack()
# hi_there=Button(frame2,text="Say hi",command=say_hi)
# hi_there.pack()
# frame1.pack()
# frame2.pack(side=BOTTOM)
# root.mainloop()