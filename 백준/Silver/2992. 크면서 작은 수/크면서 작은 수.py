# 2992 크면서 작은 수
# 백트래킹

x = input()
lt = [int(i) for i in x]
ref = sorted(lt) 
visited = [False] * len(x)

def recur(visited, i, s):
    s = s + str(ref[i])
    #print(s+" 체킹...")

    if int(s) < int(x[:len(s)]): # 더 크면 False
        #print(s + " 보다 " + x[:len(s)] + "이 더 작아서 False")
        return False

    if len(s) == len(x) : # 끝까지 돌았는데 같으면 False
        if int(s) == int(x):
            #print("같은수라 False")
            return False
        else:
            print(s)
            return True
    
    
    visited = [i for i in visited]
    visited[i] = True

    for i,v in enumerate(visited):
        if not v:
            if recur(visited,i,s):
                return True
    else:
        return False

for i,v in enumerate(visited):
    if not v:
        if recur(visited,i,''):
            break
else:
    print(0)