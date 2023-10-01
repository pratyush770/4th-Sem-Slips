f1=factor(c("A","B","C"))
f2=factor(c("D","E","F"))
f3=factor(c(levels(f1)[f1],levels(f2)[f2]))
#always add levels() as well as elements[]
print("After concatenating the factors are")
print(f3)
print("The concatented factors in descending order are")
sort(f3,decreasing = TRUE)