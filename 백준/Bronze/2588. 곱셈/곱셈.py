A = int(input())
B = list(map(int, input()))
for i in range(0,3):
    print(A*B[2-i])
C = B[0]*100 + B[1]*10 + B[2]
print(A*C)
