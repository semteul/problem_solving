# 1755 숫자놀이

m,n = [int(i) for i in input().split()]

a = ['zero','one','two','three','four','five','six','seven','eight','nine']

d = dict()
for i in range(m,n+1):
    d[' '.join([a[int(c)] for c in str(i)])] = str(i)

i=0
s = ''
for k,v in sorted(d.items()):
    if i%10 == 0:
        s[:-1]
        s+='\n'
    i+=1
    s+=str(v)+' '
print(s[1:])