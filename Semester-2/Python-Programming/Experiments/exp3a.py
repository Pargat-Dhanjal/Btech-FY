def check(n): #Prime number check function
    for i in range(2,n): # checks from 2 until the n-1 number
        if(n%i==0):
            return False #if n is divisible by i the it exits and return false
    return True #if its not divisible then it is a prime number
n,p,c,k=0,0,0,0
while True:
    n=int(input())
    if(n==-1):
        break #breaks at n = -1
    elif n<0:
        print("Invalid Input") #negetive numbers are invalid for checking
        break
    if(n==1):
        k+=1 #if user enters n as 1 then counter increases
    else:
        if check(n):
            p+=1 #increases the prime no counter
        else:
            c+=1 #increases the composite no counter
# prints the output
print("The No. of Prime Nos are:",p)
print("The No. of Composite Nos are:",c)
print("The Number 1 was entered:",k,"times")
    