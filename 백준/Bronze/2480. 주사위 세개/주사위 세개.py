A = list(map(int,input().split()))

if A[0] == A[1] == A[2]:
    print(A[0]*1000 + 10000)
elif A[0] == A[1]:
    print(A[0]*100 + 1000)
elif A[1] == A[2]:
    print(A[1]*100 + 1000)
elif A[2] == A[0]:
    print(A[2]*100 + 1000)
else:
    print(max(A)*100)