from tkinter import *
def remove_item():
    selected_checkboxes=listbox.curselection()
    for selected_checkbox in selected_checkboxes[::-1]:
        listbox.delete(selected_checkbox)
root=Tk()
root.geometry("200x200")
listbox=Listbox(root,selectmode=MULTIPLE)
listbox.pack()
items=["Apple","Orange","Grapes","Banana","Mango"]
for item in items:
    listbox.insert(END,item)
Button(root,text="Delete",command=remove_item).pack()
root.mainloop()