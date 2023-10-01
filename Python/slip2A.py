string=input("Enter a string :")
up=low=ele=0
for x in string:
    if x.isupper():
        up+=1
    elif x.islower():
        low+=1
    else:
        ele+=1
print("Number of Uppercase characters are :",up)
print("Number of Lowercase characters are :",low)
print("Other elements are",ele)
