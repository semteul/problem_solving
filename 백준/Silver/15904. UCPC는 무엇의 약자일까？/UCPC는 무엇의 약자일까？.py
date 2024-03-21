import re

s = input()
s = ''.join(re.findall('[A-Z]',s))
if re.search('U[A-Z]*C[A-Z]*P[A-Z]*C',s) != None:
    print("I love UCPC")
else :
    print("I hate UCPC")