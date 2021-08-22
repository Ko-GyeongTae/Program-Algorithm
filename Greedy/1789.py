i = 0
sum = 0

S = int(input())
while True:
    i += 1
    sum += i
    if sum == S:
        print(i)
        break
    elif sum > S:
        print(i - 1)
        break