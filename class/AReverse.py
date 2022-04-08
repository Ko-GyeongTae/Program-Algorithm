L, R = map(int, input().split())
S = input()

tmp = S[L-1:R]
tmp = tmp[::-1]

S = S[:L-1] + tmp + S[R:]
print(S)