marks=[]
n=int(input("Enter number of elements :"))
for i in range(n):
    value=int(input("Enter {} value of the list :".format(i+1)))
    marks.append(value)
print(marks)
new_marks=[]
for x in marks:
    if x not in new_marks:
        new_marks.append(x)
print(new_marks)