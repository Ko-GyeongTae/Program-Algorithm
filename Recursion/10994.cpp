// https://www.acmicpc.net/problem/10994
#include <iostream>
using namespace std;

char Map[400][400];
void draw(int N, int x, int y)
{
    if (N == 1)
    {
        Map[x][y] = '*';
        return;
    }

    int len = 4 * (N - 1) + 1;
    // X
    for (int j = y; j < y + len; j++)
    {
        Map[x][j] = '*';
        Map[x + len - 1][j] = '*';
    }
    // Y
    for (int i = x; i < x + len; i++)
    {
        Map[i][y] = '*';
        Map[i][y + len - 1] = '*';
    }

    draw(N - 1, x + 2, y + 2);
    return;
}

int main()
{
    int N;
    cin >> N;
    int len = 4 * (N - 1) + 1;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            Map[i][j] = ' ';
        }
    }

    draw(N, 0, 0);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            cout << Map[i][j];
        }
        cout << '\n';
    }
    return 0;
}
