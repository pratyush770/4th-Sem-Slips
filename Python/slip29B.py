dict1={}
n=int(input("Enter a number of pair in dict :"))
for i in range(n):
    key=input("Enter {0} key :".format(i+1))
    value=input("Enter value of {} :".format(key))
    dict1[key]=value
sorted_result=dict(sorted(dict1.items()))
print("\nSorting dictionary by key in alphabetically ascending order :")
print(sorted_result)
sorted_result=dict(sorted(dict1.items(),reverse=True))
print("\nSorting dictionary by key in alphabetically descending order :")
print(sorted_result)
a=dict(sorted(dict1.items(),key=lambda x:x[1]))
print("\nSorting dicionary by value in ascending order :")
print(a)
a=dict(sorted(dict1.items(),key=lambda x:x[1],reverse=True))
print("\nSorting dicionary by value in descending order :")
print(a)