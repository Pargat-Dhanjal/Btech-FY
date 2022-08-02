import re
str=input("Enter Credit Card numbers to check: ")
# checking the pattern using regex
print("Pattern Matched") if re.search(r"^[456]\d\d\d-\d\d\d\d-\d\d\d\d-\d\d\d\d$",str) else print("Not Matched")