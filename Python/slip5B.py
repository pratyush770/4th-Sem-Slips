def generator(n):
    a=0;b=1
    for i in range(1,n):
        print(b)
        a,b=b,a+b
n=int(input("Enter a number :"))
if n==0:
    print("0")
else:
    print(0)
generator(n)  #if you type print before generator it will display none at the end 