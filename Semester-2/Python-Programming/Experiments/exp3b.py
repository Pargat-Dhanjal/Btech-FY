n=int(input())
n1=n
k,sum=0,0
if(n<0):
    print("Invalid Input") #negetive nos are invalid
else:
    while(n!=0): #runs a while loop until its 0
        k=n%10 #store ones value in k
        sum+=pow(k,3) #adds the value of k cube to sum
        n//=10 #integer division on n by 10

    #if sum is equal to the number entered then its AS
    if(n1==sum):
        print("The number is Armstrong")
    else:
        print("The number is NOT Armstrong")