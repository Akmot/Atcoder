N=int(input())
D={}
for i in range(N):
    D[i]=input().split()

cou=0
for i in range(N):
    if D[i][0]==D[i][1]:
        cou+=1
        if cou ==3:
            print('Yes')
            break
    else:
        cou=0

if cou < 3:
    print('No')