T = int(input())
A = list(map(int,input().split()))
sum = 0
for i in range(T):
    count = 0
    for j in range(2, A[i]):
        if A[i]%j == 0:
            count = 1
            break
    if A[i] == 1:
        count = 1
    if count == 0:
        sum += 1
print(sum)