import re
str='''Dave Martin
615-555-7164
173 Main St., Springfield RI 55924
davemartin@bogusemail.com

Charles Harris
800-555-5669
969 High St., Atlantis VA 34075
charlesharris@bogusemail.com

Eric Williams
560-555-5153
806 1st St., Faketown AK 86847
laurawilliams@bogusemail.com

Corey Jefferson
900-555-9340
826 Elm St., Epicburg NE 10671
coreyjefferson@bogusemail.com'''
str1=str.splitlines()
# Spliting the multiline string at new lines
for i in str1:
    if(re.search(r"^\d\d\d-\d\d\d-\d\d\d\d$",i)):
        print(i)
        # Checking for pattern and printing if found