import sys
A = int(sys.stdin.readline())
B = int(sys.stdin.readline())
C = []
for i in range(A,B+1):
    count = 0
    for j in range(2,i):
        if i%j == 0:
            count = 1
            break
    if i == 1:
        count = 1
    if count == 0:
        C.append(i)

if len(C) == 0:
    print("-1")
else:
    print(sum(C))
    print(min(C))