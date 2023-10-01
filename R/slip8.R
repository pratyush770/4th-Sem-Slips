Name=c("Ameya","Aditya","Ashish","Pratyush","Shreya")
Language=c("R","Python","Java","HTML","CPP")
Age=c(20,45,22,18,30)
df=data.frame(Name,Language,Age)
print(df)
df[order(Age),]
#df[order(-Age),]