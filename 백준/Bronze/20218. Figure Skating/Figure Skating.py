n = int(input())

d = {}
for i in range(n):
    d[input()] = i

m=0
r="suspicious"
for i in range(n):
    s = input()
    a = d[s]-i
    if m < a:
        m = a
        r = s

print(r)