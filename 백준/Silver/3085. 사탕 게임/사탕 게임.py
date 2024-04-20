import re

n = int(input())

field = []
for i in range(n):
    field.append([a for a in input()])

result = []

# 가로줄 검사
for s in field:
    result.append(max([len(s) for s in re.findall("P+|C+|Z+|Y+","".join(s))]))

# 세로줄 검사
for i in range(len(field)):
    s = []
    for j in range(len(field)):
        s.append(field[j][i])



def swap1(i,j):
    tmp = field[i][j]
    field[i][j] = field[i][j+1]
    field[i][j+1] = tmp

def swap2(i,j):
    tmp = field[i][j]
    field[i][j] = field[i+1][j]
    field[i+1][j] = tmp

# 가로에서 두개 바꾸고 검사
for i in range(len(field)):
    for j in range(len(field)-1):
        if field[i][j] != field[i][j+1]:
            swap1(i,j)
            
            s1 = []
            s2 = []
            s3 = field[i]
            for k in range(len(field)):
                s1.append(field[k][j])
                s2.append(field[k][j+1])

            result.append(max([len(s1) for s1 in re.findall("P+|C+|Z+|Y+","".join(s1))]))
            result.append(max([len(s2) for s2 in re.findall("P+|C+|Z+|Y+","".join(s2))]))
            result.append(max([len(s3) for s3 in re.findall("P+|C+|Z+|Y+","".join(s3))]))


            swap1(i,j)
        
        if field[j][i] != field[j+1][i]:
            swap2(j,i)
            s1 = field[j]
            s2 = field[j+1]
            s3 = []
            for k in range(len(field)):
                s3.append(field[k][i])

            result.append(max([len(s1) for s1 in re.findall("P+|C+|Z+|Y+","".join(s1))]))
            result.append(max([len(s2) for s2 in re.findall("P+|C+|Z+|Y+","".join(s2))]))
            result.append(max([len(s3) for s3 in re.findall("P+|C+|Z+|Y+","".join(s3))]))
            swap2(j,i)



print(max(result))