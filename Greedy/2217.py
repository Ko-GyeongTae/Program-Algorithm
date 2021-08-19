def solution(): 
    inputList.sort(reverse=True)                # DESC input value
    for i in range(N):
        inputList[i] = inputList[i] * (i + 1)   # total result
    
    return max(inputList)                       # return answer

N = int(input())                                # input N value
inputList = []                                  # input value list

for _ in range(N):                              # input
    inputList.append(int(input()))              # make list

print(solution())