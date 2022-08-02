name=input("Enter file name: ") #Taking file name
try :
    fp=open(name,'r') # Trying to open file
    print("\n\n")
    for line in fp: #For each loop for every line
        print(line.upper()) #Converting to upper case and printing
    fp.close() #closing file object
except:
    print("The file does not exist! Kindly check again") 
# Exception when file is not available