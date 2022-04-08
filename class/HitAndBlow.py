N = int(input())

listA = list(map(int, input().split()))
listB = list(map(int, input().split()))

count1 = 0
count2 = 0

for i in range(N):
    if listA[i] == listB[i]:
        count1 += 1
    if listA[i] in listB and listA[i] != listB[i]:
        count2 += 1

print(count1)
print(count2)