// https://www.acmicpc.net/problem/2606
#include <iostream>

using namespace std;

bool map[101][101] = {0};
bool visit[101] = {0};
int computer, ans = 0;

void DFS(int n)
{
    ans++;
    visit[n] = true;
    for (int i = 1; i <= computer; i++)
    {
        if (map[n][i] && !visit[i])
            DFS(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int x, y;
    cin >> computer >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        map[x][y] = map[y][x] = true;
    }

    DFS(1);
    cout << ans - 1 << endl;
    return 0;
}
