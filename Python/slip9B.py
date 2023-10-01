from tkinter import *
def perfect():
    number=int(numberFeald.get())
    count=0
    for i in range(1,number):
        if number%i==0:
            count=count+i
    if count==number:
        perfect1.select()
        print(number,"is a Perfect number")
    else:
        perfect1.deselect()
        print(number,"is not a Perfect number")
def armstrong():
    number=int(numberFeald.get())
    count=0
    temp=number
    while temp>0:
        digit=temp%10
        count+=digit**3
        temp//=10
    if number==count:
        armstrong1.select()
        print(number,"is an Armstrong number")
    else:
        armstrong1.deselect()
        print(number,"is not an Armstrong number")
def prime():
    number=int(numberFeald.get())
    if number>1:
        for i in range(2,number):
            if(number%i)==0:
                prime1.deselect()
                print(number,"is not a prime number")
                print(i,"times",number//i,"is",number)
                break
            else:
                prime1.select()
                print(number,"is a prime number")
root=Tk()
root.title("Prime,Perfect or Armstrong number")
root.geometry('300x200')
numberFeald=Entry(root)
numberFeald.pack()
Button1=Button(root,text="Click here",command=lambda:[armstrong(),prime(),perfect()])
Button1.pack()
prime2=IntVar()
perfect2=IntVar()
armstrong2=IntVar()
armstrong1=Radiobutton(root,text="Armstrong",variable=armstrong2,value=1)
prime1=Radiobutton(root,text="Prime",variable=prime2,value=1)
perfect1=Radiobutton(root,text="Perfect",variable=perfect2,value=1)
armstrong1.pack()
prime1.pack()
perfect1.pack()
root.mainloop()
