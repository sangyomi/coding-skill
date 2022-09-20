import sys

A = int(sys.stdin.readline())
C = []
i = 1

while A != 1:
    i += 1
    if A%i == 0:
        A = A//i 
        C.append(i)
        i = 1
    
for c in range(len(C)):
    print(C[c])