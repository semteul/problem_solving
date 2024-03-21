import re
s = input()
print("YES") if ''.join(re.findall('pi|ka|chu',s)) == s else print("NO")