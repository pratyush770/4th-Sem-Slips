library(caret)
data=(iris)
dataset=iris
x=dataset[,1:4]
y=dataset[,5]
plot(y)
scales=list(x=list(relation="free"),y=list(relation="free"))
featurePlot(x=x,y=y,plot="density",scales=scales)