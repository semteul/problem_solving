# 1120 문자열
a,b = input().split()
m = -1
for i in range(len(b)-len(a)+1):
    cnt=0
    # 범위
    for j,v in enumerate(b[i:(i+len(a))]):
        if a[j] != b[j+i]:
            cnt+=1
    if m > cnt or m == -1:
        m = cnt

print(m)