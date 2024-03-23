# 1로 만들기
x = int(input())
if x==1:
    print(0)
    exit(0)
if x <=3:
    print(1)
    exit(0)

mem = [0]*(x+1)
mem[1]=0
mem[2]=1
mem[3]=1

for i in range(4,x+1):
    if i%3==0 and i%2==0:
        mem[i]=min(mem[i-1],mem[i//2],mem[i//3])+1
        continue
    if i%2==0:
        mem[i]=min(mem[i-1],mem[i//2])+1
        continue
    if i%3==0:
        mem[i]=min(mem[i-1],mem[i//3])+1
        continue
    else:
        mem[i] = mem[i-1]+1

print(mem[x])