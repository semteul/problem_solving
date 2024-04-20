n = int(input())

field = []
for i in range(n):
    field.append([int(i) for i in input()])


def dfs(i,j):
    if i<0 or j<0 or i >= n or j >= n:
        return 0
    
    if field[i][j] == 0:
        return 0
    
    if visited[i][j]:
        return 0

    visited[i][j] = True
    count = 1
    count += dfs(i,j+1)
    count += dfs(i,j-1)
    count += dfs(i+1,j)
    count += dfs(i-1,j)
    return count

result = []

# 탐색
visited = [[False for _ in range(n)] for _ in range(n)]

for i in range(n):
    for j in range(n):
        if not visited[i][j] and field[i][j] == 1:
            result.append(dfs(i,j))

print(len(result))
for n in sorted(result):
    print(n)