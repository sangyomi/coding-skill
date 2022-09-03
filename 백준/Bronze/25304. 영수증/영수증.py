T = int(input())
N = int(input())
SUM = 0
for i in range(0, N):
    M,R = map(int,input().split())
    SUM = SUM + M*R
if SUM == T:
    print("Yes")
else:
    print("No")