while True:
    n = int(input())
    if n == 0: break
    keys = []
    values= []
    for _ in range(n):
        s = input()
        keys.append(s.upper())
        values.append(s)
    
    print(sorted(zip(keys,values))[0][1])