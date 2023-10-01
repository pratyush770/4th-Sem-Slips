subset(mtcars[,1],mtcars[,1]>15.0)
head(subset(airquality,Ozone>28 | Temp>70),n=5)
subset(airquality,Ozone>100,select = c(Ozone,Temp,Month,Day))