# 2784번
# 순열 순회를 위해 itertools를 import 했다.
from itertools import permutations

lt = []
for _ in range(6):
    lt.append(input())

result = []
for i,j,k in permutations(lt,3):
    tmp = [a for a in lt]
    tmp.remove(i)
    tmp.remove(j)
    tmp.remove(k)
    if i[0]+j[0]+k[0] in tmp:
        tmp.remove(i[0]+j[0]+k[0])
        if i[1]+j[1]+k[1] in tmp:
            tmp.remove(i[1]+j[1]+k[1])
            if i[2]+j[2]+k[2] in tmp : 
                result.append(i+'\n'+j+'\n'+k)

if len(result) == 0:
    print(0)
else:
    print(sorted(result)[0])