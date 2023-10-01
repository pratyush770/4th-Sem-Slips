list_data=list("India","China","Japan")
print(list_data)
names(list_data)=c("1st list","2nd list","3rd list")   #give names to the list
print(list_data)   
list_data[4]="UAE"    #adding an element
print(list_data)
list_data[4]=NULL     #removing an element
print(list_data)
list_data[3]="Germany"    #updating an element
print(list_data)