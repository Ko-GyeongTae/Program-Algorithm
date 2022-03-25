#include <stdio.h>

int binarySearch(int data[], int size, int d) {
    int s = 0;
    int e = size - 1;
    int m;
    while (s <= e) {
        m = (s + e) / 2;

        if (data[m] == d) 
            return m;
        else if (data[m] > d) 
            e = m - 1;
        else
            s = m + 1;
    }
    return -1;
}
 
int main() {
    int data[] = { 1, 2, 3, 5, 7, 8, 9, 11, 15 };
    int dataSize = sizeof(data) / sizeof(int);
    printf("%d\n", binarySearch(data, dataSize, 11));
}