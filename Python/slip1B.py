#import all functions from the tkinter
from tkinter import *
#import messagebox class from tkinter
from tkinter import messagebox
#function for clearing the contents of the entry boxes
def clearAll():
    #deleting the content from the entry box
    dayField.delete(0,END)
    monthField.delete(0,END)
    yearField.delete(0,END)
    givenDayField.delete(0,END)
    givenMonthField.delete(0,END)
    givenYearField.delete(0,END)
    rsltDayField.delete(0,END)
    rsltMonthField.delete(0,END)
    rsltYearField.delete(0,END)
#function for checking error
def checkError():
    #if any of the entry field is empty then show an error message and clear all the boxes
    if(dayField.get()=="" or monthField.get()=="" or yearField.get()=="" or givenDayField.get()=="" or givenMonthField.get()=="" or givenYearField.get()==""):
        messagebox.showerror("Error")
        clearAll()
        return -1
#function to calculate Age
def CalculateAge():
    #check for error
    value=checkError()
    if value==-1:
        return
    else:
        #take a value from the respective entry boxes and get method returns current text as a string
        birth_day=int(dayField.get())
        birth_month=int(monthField.get())
        birth_year=int(yearField.get())
        given_day=int(givenDayField.get())
        given_month=int(givenMonthField.get())
        given_year=int(givenYearField.get())
        #if birth date is greater than given_birth_month then do not count the month and add 30 to the 
        #date so as to subtract the date and get the remaining days
        month=[31,28,31,30,31,30,31,30,31,30,31,30]
        if(birth_day>given_day):
            given_month=given_month-1
            given_day=given_day+month[birth_month-1]
        #if birth_month exceeds given_month, then do not count this year and add 12 to the month so that we 
        #can subtract and find out the difference
        if(birth_month>given_month):
            given_year=given_year-1
            given_month=given_month+12
        #calculate day,month and year
        calculated_day=given_day-birth_day
        calculated_month=given_month-birth_month
        calculated_year=given_year-birth_year
        #write back the calculated day, moonth and year to the respective entry boxes by using insert method
        #insert method is used to insert the value in the entry box
        rsltDayField.insert(10,str(calculated_day))
        rsltMonthField.insert(10,str(calculated_month))
        rsltYearField.insert(10,str(calculated_year))
#Driver Code
if __name__=="__main__":
    #create a GUI window
    gui=Tk()
    #set the background color of the GUI window
    gui.configure(background="light green")
    #set the name of the tkinter GUI window
    gui.title("Age Calculator")
    #set the configuration of the GUI window
    gui.geometry("525x260")
    #Create a Date of Birth : Label  
    dob=Label(gui,text="Date of Birth",bg="blue")
    #Create a Given Date : Label 
    givenDate=Label(gui,text="Given Date",bg="blue")
    #Create a Day : Label 
    day=Label(gui,text="Day",bg="light green")
    #Create a Month : Label 
    month=Label(gui,text="Month",bg="light green")
    #Create a Year : Label 
    year=Label(gui,text="Year",bg="light green")
    #Create a Given Day : Label 
    givenDay=Label(gui,text="Given Day",bg="light green")
    #Create a Given Month : Label 
    givenMonth=Label(gui,text="Given Month",bg="light green")
    #Create a Given Year : Label 
    givenYear=Label(gui,text="Given Year",bg="light green")
    #Create a Years : Label
    rsltYear=Label(gui,text="Years",bg="light green")
    #Create a Month : Label
    rsltMonth=Label(gui,text="Months",bg="light green")
    #Create a Day : Label
    rsltDay=Label(gui,text="Days",bg="light green")
    #Create a Resultant Age button and attach it to the CalculateAge function using command function
    resultantAge=Button(gui,text="Resultant Age",fg="Black",bg="Red",command=CalculateAge)
    #Create a Clear All button and attach it to the clearALL function using command function
    clearAllEntry=Button(gui,text="Clear All",fg="Black",bg="Red",command=clearAll)
    #Create a text entry box for filling or typing the information
    dayField=Entry(gui)
    monthField=Entry(gui)
    yearField=Entry(gui)
    givenDayField=Entry(gui)
    givenMonthField=Entry(gui)
    givenYearField=Entry(gui)
    rsltDayField=Entry(gui)
    rsltMonthField=Entry(gui)
    rsltYearField=Entry(gui)
    #grid method is used for placing the widgets at respective positions in table like structure
    dob.grid(row=0,column=1)
    day.grid(row=1,column=0)
    dayField.grid(row=1,column=1)
    month.grid(row=2,column=0)
    monthField.grid(row=2,column=1)
    year.grid(row=3,column=0)
    yearField.grid(row=3,column=1)
    givenDate.grid(row=0,column=4)
    givenDay.grid(row=1,column=3)
    givenDayField.grid(row=1,column=4)
    givenMonth.grid(row=2,column=3)
    givenMonthField.grid(row=2,column=4)
    givenYear.grid(row=3,column=3)
    givenYearField.grid(row=3,column=4)
    resultantAge.grid(row=4,column=2)
    rsltYear.grid(row=5,column=2)
    rsltYearField.grid(row=6,column=2)
    rsltMonth.grid(row=7,column=2)
    rsltMonthField.grid(row=8,column=2)
    rsltDay.grid(row=9,column=2)
    rsltDayField.grid(row=10,column=2)
    clearAllEntry.grid(row=12,column=2)
    #start the GUI
    gui.mainloop()