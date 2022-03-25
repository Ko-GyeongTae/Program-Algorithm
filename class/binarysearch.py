from ctypes import sizeof


def solution(data, target):
    s = 0;
    e = len(data) - 1
    while (s <= e):
        m = (s + e) / 2
        if (data[m] == target):
            return m;
        elif (data[m] > target):
             e = m - 1
        else: 
            s = m + 1
    
    return -1;

arr = [1, 2, 3, 5, 7, 8, 9, 11, 15]

print(solution(arr, 10))