#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, tmp, *arr;

    scanf("%d", &N);
    arr = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    printf("%d %d\n", arr[0], arr[N - 1]);
    return 0;
}