n = int(input())
lt = []
for _ in range(n):
    lt.append(input())

result = []

for v in sorted(lt,key = lambda x: (len(x),x),reverse=True):
    for r in result:
        if r[:len(v)] == v:
            break
    else:
        result.append(v)

print(len(result))