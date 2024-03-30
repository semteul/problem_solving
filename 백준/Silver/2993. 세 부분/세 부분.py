a = input()
t = a[:2]+a[2:][::-1]
for i in range(1,len(a)-1):
    for j in range(i+1,len(a)):
        c= a[0:i][::-1] + a[i:j][::-1] + a[j:][::-1]
        if t > c:
            t = c

print(t)