// https://www.acmicpc.net/problem/11660

#include <iostream>

using namespace std;

int map[1026][1026];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, num;
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> num;
            map[i][j] = map[i - 1][j] + map[i][j - 1] - map[i - 1][j - 1] + num;
        }
    }

    for (int i = 0; i < M; i++)
    {
        int x1, y1, x2, y2;
        cin >> y1 >> x1 >> y2 >> x2;

        cout << map[y2][x2] - map[y1 - 1][x2] - map[y2][x1 - 1] + map[y1 - 1][x1 - 1] << '\n';
    }

    return 0;
}