N, L = map(int,input().split())
a = []
for i in range(0,N):
    a.append(list(map(int,input().split())))

P = 0 
for i in range(0,N):
    k = 1
    NP = 0
    b = []
    b.append(0)
    for j in range(0,N-1):
        b.append(0)
        if a[i][j] == a[i][j+1] :
            k += 1
        if a[i][j+1] - a[i][j] == 1 :
            if k < L: 
                NP += 1
            else :
                k = 1
                for t in range(0, L):
                    b[j-t] = 1
        elif a[i][j+1] - a[i][j] > 1 or a[i][j+1] - a[i][j] < -1 :
            NP += 1
    k = 1 
    for j in range(N-1,0,-1):
        if a[i][j] == a[i][j-1] :
            k += 1
        if a[i][j-1] - a[i][j] == 1 :
            if k < L:    
                NP += 1
            else :
                k = 1 
                for t in range(0, L):
                    if b[j+t] == 1:   
                        NP += 1 
        elif a[i][j-1] - a[i][j] > 1 or a[i][j-1] - a[i][j] < -1: 
            NP += 1
    if NP == 0:
        P += 1

a = list(map(list, zip(*a)))

for i in range(0,N):
    k = 1
    NP = 0
    b = []
    b.append(0)
    for j in range(0,N-1):
        b.append(0)
        if a[i][j] == a[i][j+1] :
            k += 1
        if a[i][j+1] - a[i][j] == 1 :
            if k < L:    
                NP += 1
            else :
                k = 1
                for t in range(0, L):
                    b[j-t] = 1
        elif a[i][j+1] - a[i][j] > 1 or a[i][j+1] - a[i][j] < -1 : 
            NP += 1
    k = 1 
    for j in range(N-1,0,-1):
        if a[i][j] == a[i][j-1] :
            k += 1
        if a[i][j-1] - a[i][j] == 1 :
            if k < L:    
                NP += 1
            else :
                k = 1 
                for t in range(0, L):
                    if b[j+t] == 1:            
                        NP += 1 
        elif a[i][j-1] - a[i][j] > 1 or a[i][j-1] - a[i][j] < -1: 
            NP += 1
    if NP == 0:
        P += 1

print(P)