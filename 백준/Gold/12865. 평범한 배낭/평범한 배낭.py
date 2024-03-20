# 백준 12865
n,k = [int(i) for i in input().split()]

weight = []
value = []

for i in range(n):
    w,v = [int(i) for i in input().split()]
    if w > k :
        v = 0
        w = 0
    weight.append(w)
    value.append(v)

mem = [0 for _ in range(k+1)]
for i in range(n):
    if weight[i] > k:
        break

    for j in range(k+1,0,-1):
        if j+weight[i] > k:
            continue

        if mem[j+weight[i]] < mem[j] + value[i] and mem[j] != 0:
            mem[j+weight[i]] = mem[j] + value[i]
    
    if mem[weight[i]] < value[i]:
        mem[weight[i]] = value[i]

print(max(mem))