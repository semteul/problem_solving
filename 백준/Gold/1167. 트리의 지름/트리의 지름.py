n = int(input())

# 트리 만들기
t = [[]]*n

for i in range(n):
    l2 = [int(i) for i in input().split(' ')]
    v1 = l2[0]-1 # 시작점
    vl = [ i-1 for i in l2[1::2][:-1]] # 도착점
    wl = [ i for i in l2[0::2][1:]] # 간선간 weight

    t[v1]=list(zip(vl,wl))

# 트리 순회
def getM(n,visited):
    visited[n] = True
    m = 0
    i = n
    for v,w in t[n]:
        if not visited[v]:
            tmp1,tmp2 = getM(v, visited)
            if m < tmp1+w:
                m = tmp1+w
                i = tmp2

    return (m,i)



print(getM(getM(0, [False]*n)[1],[False]*n)[0])