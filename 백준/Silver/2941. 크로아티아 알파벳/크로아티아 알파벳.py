# 2931 크로아티아 알파벳
# 정규식으로 쉽게 세줄 수 있다.
# 정규식 or는 앞에것 부터 찾는다.
import re
s = input()
print(len(re.findall('c=|c-|dz=|d-|lj|nj|s=|z=|[A-Za-z]',s)))