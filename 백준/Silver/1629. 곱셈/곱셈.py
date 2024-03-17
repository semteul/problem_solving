a,b,c = [int(i) for i in input().split(" ")]

# 2의 제곱수의 나머지 우선 구하기
lt = [0]*32
lt[0] = a%c
for i in range(1,32):
    lt[i] = (lt[i-1]*lt[i-1])%c

# 2의 제곱수로 분해해서 구하기
t = 1
index = 0
for i in [int(i) for i in bin(b)[2:][::-1]]:
    if i== 1:
        t *= lt[index]
    index+=1

print(t%c)