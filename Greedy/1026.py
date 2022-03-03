N = int(input())

listA = list(map(int, input().split()))
listB = list(map(int, input().split()))

s = 0
for i in range(N):
    s += min(listA) * max(listB)
    listA.pop(listA.index(min(listA)))
    listB.pop(listB.index(max(listB)))

print(s)