try:
    num=int(input("Enter a number :"))
except ValueError:
    print("\nThis is not a number")
else:
    print("\nThe number is :",num)