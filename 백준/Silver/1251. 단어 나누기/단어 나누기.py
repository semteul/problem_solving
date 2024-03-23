# 1251

s = input()

# 브루트포스로 풀어보기

m = ''

for i in range(1,len(s)-1):
    for j in range(i+1,len(s)):
        a = (s[:i])[::-1]
        b = (s[i:j])[::-1]
        c = (s[j:])[::-1]
        z = ''.join([a,b,c])
        if z < m or m == '':
            m = z

print(m)