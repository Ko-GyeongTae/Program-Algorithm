#include <stdio.h>

int recursive(int x)
{
    if (x < 1)
        return 0;

    int isTrue = 0;
    if (x % 10 == 3 || x % 10 == 6 || x % 10 == 9)
        isTrue = 1;

    return recursive(x / 10) + isTrue;
}

int main()
{
    int N, cnt = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        cnt += recursive(i);
    }

    printf("%d", cnt);
    return 0;
}