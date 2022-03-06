# N 기타줄 수 M 브랜드 수

# 최저가를 구하는법  세트가격 * @ ( @ * 6 >= N) || 개당가격 *  @ ( @ >= N )

N, M = map(int, input().split())
X = 1
tmpA = 0

min = 99999999999999999

for i in range(M):
    a, b = map(int, input().split())

    while X < N / 6 + 1:
        tmpA = a * X
        X += 1
    
    if tmpA < min:
        min = tmpA
    
    if b * N < min:
        min = b * N

    tmp1 = int(N / 6)
    tmp2 = N - tmp1
    if tmp1 * a + tmp2 * b < min:
        min = tmp1 * a + tmp2 * b
    
print(min)
