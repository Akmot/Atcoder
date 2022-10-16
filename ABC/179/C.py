N=int(input())

cou=0
for i in range(1:N-1):
    for w in range(1:(N-i)):
        if (N-i)%w==0:
            cou+=1

print(cou)
