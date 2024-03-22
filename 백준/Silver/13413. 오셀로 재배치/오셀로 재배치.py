T = int(input())

for _ in range(T):
    n = int(input())
    sa = input()
    sb = input()

    cw = 0
    cb = 0
    for a,b in zip(sa,sb):
        if a != b:
            if a == 'W': 
                cw+=1
            else:
                cb+=1
    
    print(abs(cw-cb)+min(cw,cb))