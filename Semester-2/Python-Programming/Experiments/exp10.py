fp=open("rollcall.txt","w") #Opening a file in writing mode
n=int(input("Enter the number of Students: "))
fp.write("Roll Number\t\tName\t\tDepartment\n") #writting the table heading
studentli=[]
for i in range(n):
    print("\nFor Student",i+1,"enter details:")
    rollno=input("Enter Roll no: ")
    name=input("Enter Name: ")
    dept=input("Enter Department: ") #Taking user input for the details
    fp.write(f"{rollno}\t\t{name}\t\t{dept}\n") # Writing the details on new line
fp.close() #Closing the file object after use
print("You can view the result in: rollcall.txt")