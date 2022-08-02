str=input("Enter the string: ") #takes in string input
dict={} #declare an empty dictionary
for i in str:   #iterate through string
    if i in dict:
        dict[i]+=1  #increase count
    else:
        dict[i]=1   #if not present then add one occ
print("Character count is: ",dict)