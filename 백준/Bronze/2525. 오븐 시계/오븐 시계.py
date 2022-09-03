H,M = map(int,input().split())
C = int(input())
H_C = C//60
M_C = C%60

F_H = H + H_C
F_M = M + M_C

L_H = (F_H + F_M//60)%24
L_M = F_M%60

print(L_H,L_M)