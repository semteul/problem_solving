n = int(input())

lt1 = []
for i in range(n):
    lt1.append(input())
d = dict(zip(lt1, range(n)))

lt2 = []
for i in range(n):
    lt2.append(input())

p = 0
count = 0
for i2 in range(n-1,-1,-1):
    k = lt2[i2]
    i1 = d[k]
    
    if i2-i1 > p:
        p = i2-i1
    if i2-i1 < p:
        count += 1
        p -= 1    
    
print(count)