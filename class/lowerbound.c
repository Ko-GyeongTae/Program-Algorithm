#include <stdio.h>
#include <stdlib.h>

int lowerBound(int *data, int target, int size)
{
    int m;
    int start = 0;
    int end = size - 1;

    while (end - start > 0)
    {
        m = (start + end) / 2;
        if (data[m] < target)
            start = m + 1;
        else
            end = m;
    }
    return end + 1;
}

int main()
{
    int *data, size, target;
    scanf("%d", &size);
    data = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &data[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d", data[i]);
    }

    scanf("%d", &target);

    printf("\n%d\n", lowerBound(data, target, size));
    return 0;
}