import sys
T = int(sys.stdin.readline())
for i in range(T):
    print(" "*(T-i-1), end='')
    for j in range(i+1):
        print("*", end='')
    print("\n", end ='')