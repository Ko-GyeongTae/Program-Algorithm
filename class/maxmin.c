#include <stdio.h>

int main()
{
    int N = 9, max, index, arr[1000001];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }

    printf("%d\n%d\n", max, index + 1);
    return 0;
}