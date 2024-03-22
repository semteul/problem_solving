#1316 그룹단어체커
n = int(input())

cnt=0
for _ in range(n):
    a = input()
    s = set()
    
    for i in range(len(a)):
        if a[i] not in s:
            s.add(a[i])
        elif i>0 and a[i-1] != a[i]:
            break
    else:
        cnt+=1

print(cnt)