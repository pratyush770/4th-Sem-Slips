library(dplyr)
roll_no=c(1,2,3)
name=c("Pratyush","Prakash","Prayushi")
df=data.frame(roll_no,name)
print("The contents of the first data frame are")
print(df)
df1=data.frame(roll_no=c(1,2),name=c("Pratyush","Prakash"))
print("The contents of the second data frame are")
print(df1)
print("The elements present in first data frame but not in second data frame are")
setdiff(df,df1)