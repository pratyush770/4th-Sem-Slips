list_data=list("Pratyush","Aditya","Srinand","Riya")
print(list_data)
names(list_data)=c("1st list","2nd list","3rd list","4th list")   #gives names to the list
print(list_data)
list_data[5]="Margi"    #adds an element
print(list_data)
list_data[1]=NULL     #removes an element
print(list_data)
list_data[3]="Aryan"   #updates an element
print(list_data)