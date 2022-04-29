// https://www.acmicpc.net/problem/1780

#include <iostream>

using namespace std;

int map[2200][2200];
int res[3];
// check
bool check(int row, int col, int arg)
{
    int start = map[row][col];
    for (int i = row; i < row + arg; i++)
    {
        for (int j = col; j < col + arg; j++)
        {
            if (start != map[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

void divideAndCount(int row, int col, int arg)
{
    if (check(row, col, arg))
    {
        res[map[row][col] + 1]++;
    }
    else
    {
        int size = arg / 3;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                divideAndCount(row + size * i, col + size * j, size);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    // input
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> map[i][j];
        }
    }

    divideAndCount(0, 0, N);

    cout << res[0] << ' ' << res[1] << ' ' << res[2] << endl;

    return 0;
}