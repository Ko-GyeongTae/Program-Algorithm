// https://www.acmicpc.net/problem/1012
#include <iostream>

using namespace std;

bool map[50][50];

void DFS(int row, int col)
{
    if (row < 0 || row >= 50)
        return;
    if (col < 0 || col >= 50)
        return;

    if (!map[row][col])
    {
        return;
    }

    map[row][col] = false;
    DFS(row + 1, col); // 상
    DFS(row - 1, col); // 하
    DFS(row, col - 1); // 좌
    DFS(row, col + 1); // 우
}

int main(void)
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int tc;
    cin >> tc;
    for (int t = 0; t < tc; t++)
    {
        int m, n, k;
        cin >> m >> n >> k;

        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            map[y][x] = true;
        }

        int number = 0;
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < m; col++)
            {
                if (map[row][col])
                {
                    number++;
                    DFS(row, col);
                }
            }
        }

        cout << number << '\n';
    }
    return 0;
}