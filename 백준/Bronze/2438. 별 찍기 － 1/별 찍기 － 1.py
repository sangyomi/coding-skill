import sys
T = int(sys.stdin.readline())
for i in range(T):
    for j in range(i+1):
        print("*", end='')
    print("\n", end ='')