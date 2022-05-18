// https://www.acmicpc.net/problem/2630

#include <iostream>

using namespace std;

int map[130][130];
int res[2];
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
        res[map[row][col]]++;
    }
    else
    {
        int size = arg / 2;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
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

    cout << res[0] << '\n'
         << res[1] << endl;

    return 0;
}