li=[]
n=int(input("Enter list size: "))
for i in range(0,n):
    li.append(int(input()))
odd=list(filter(lambda x : x%2!=0,li))
#using filter to filter out even numbers from list li
even=list(filter(lambda x: x%2==0,li))
#again using filter to filter out odd number from list
print("Odd list:",odd)
print("Even list:",even)