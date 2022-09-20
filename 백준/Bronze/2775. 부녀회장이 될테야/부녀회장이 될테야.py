import copy
T = int(input())

for i in range(T):
    L = []
    E = []
    A = int(input())
    B = int(input())
    for k in range(1,B+1) :
        L.append(k)
        E.append(k)
    
    for j in range(1,A) :
        for y in range(B):
            L[y] = sum(E[0:y+1])
        E = copy.deepcopy(L)
    
    print(sum(L))