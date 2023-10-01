list1=[]
n=int(input("Enter the number of elements in the list :"))
for i in range(n):
    value=int(input("Enter {} value of the list :".format(i+1)))
    list1.append(value)
list2=[]
n=int(input("Enter the number of elements in the list :"))
for i in range(n):
    value=int(input("Enter {} value of the list :".format(i+1)))
    list2.append(value)
print("List 1 :",list1)
print("List 2 :",list2)
tuple1=tuple(list1+list2)
print(tuple1)