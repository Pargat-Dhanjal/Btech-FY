def palin(start,end,str1):
    if(str1[start]!=str1[end]):
        return False #if the end strings are not equal then it is not palin
    if(start==end or start>end): #if start counter is greater than end counter
        return True #if the string is single letter then it is palin
    else:
        return palin(start+1,end-1,str1) 
    #calls itself to check if the remaining string is palin or not
str1=input("Enter String: ")
print(palin(0,len(str1)-1,str1))