# 5555번 반지
s = input()
n = int(input())
cnt = 0

for _ in range(n):
    ring = input()
    for i in range(len(ring)):
        r = ring[i:]+ring[:i]
        if r[:len(s)] == s:
            cnt+=1
            break

print(cnt)