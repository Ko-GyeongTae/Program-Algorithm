N = int(input())
result = 0
arr = []

for i in range(N):
    tmp = int(input())
    arr.append(tmp)

main = arr.pop(0)

while max(arr) >= main:
    if main in arr:
        main += 1
        arr[arr.index(max(arr))] -= 1
        break
    index = arr.index(max(arr))
    arr[index] -= 1
    result += 1
    arr[0] += 1

print(result)