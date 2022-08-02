length=input("Enter the length of the rectagular prism in metric: ")
width=input("Enter the width of the rectagular prism in metric: ")
height=input("Enter the height of the rectagular prism in metric: ")
unit=input("Enter the unit for calculations: ")
# Taking in input from the user
if length.replace('.','',1).isdecimal() and width.replace('.','',1).isdecimal() and height.replace('.','',1).isdecimal():
    # Checking in if the entered values are floating point numbers
    length=float(length)
    width=float(width)
    height=float(height)
    if length<=0 or width<=0 or height<=0:
        print("Please enter postive values only!")
        # The input values are zero or negetive
    else:
        volume=length*width*height
        diagonal=((length**2)+(width**2)+(height**2))**(0.5)
        print("The volume of the rectangular prism is",round(volume,3),"cubic",unit)
        print("Diagonal length of the rectangular cube is",round(diagonal,3),unit)
        # printing out the solution of the program
else:
    print("Please enter numeric values only!")