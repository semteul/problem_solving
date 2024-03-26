n = int(input())

t = []
p = []
for i in range(n):
    lt = input().split()
    t.append(int(lt[0]))
    p.append(int(lt[1]))

mem = [0]*n

for i in range(n-1,-1,-1):
    if i+t[i] > n: # 상담을 하면 퇴사일보다 초과되는 경우
        mem[i] = 0
    elif i+t[i] == n:
        mem[i] = p[i]
    else:
        mem[i] = max(mem[i+t[i]: n]) + p[i] # 바로 다음부터 마지막 까지 값 중 최대 선택
            
print(max(mem))