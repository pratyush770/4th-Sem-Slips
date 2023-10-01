def bubble_sort(list1):
      for i in range(0,len(list1)-1):
         for j in range(len(list1)-1):
             if(list1[j]>list1[j+1]):  #(j+1) means one element ahead
                 temp=list1[j]
                 list1[j]=list1[j+1]
                 list1[j+1]=temp
      return list1
list1=[]
n=int(input("Enter number of elements :"))
for i in range(n):
    value=int(input())
    list1.append(value)
print("The unsorted list is :",list1)
print("The sorted list is :",bubble_sort(list1))