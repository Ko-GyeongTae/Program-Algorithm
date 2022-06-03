// https://www.acmicpc.net/problem/1260

#include <iostream>
#include <queue>
using namespace std;

int N, M, V;
bool map[1001][1001];
bool visited[1001];
queue<int> BFS_Q;

void reset()
{
    for (int i = 1; i <= N; i++)
    {
        visited[i] = false;
    }
}

void DFS(int arg)
{
    visited[arg] = true;
    cout << arg << ' ';
    for (int i = 1; i <= N; i++)
    {
        if (map[arg][i] == true && visited[i] == false)
        {
            DFS(i);
        }
    }

    return;
}

void BFS(int arg)
{
    BFS_Q.push(arg);
    visited[arg] = true;
    cout << arg << ' ';

    while (!BFS_Q.empty())
    {
        arg = BFS_Q.front();
        BFS_Q.pop();

        for (int i = 1; i <= N; i++)
        {
            if (map[arg][i] == true && visited[i] == false)
            {
                BFS_Q.push(i);
                visited[i] = true;
                cout << i << ' ';
            }
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> V;
    for (int i = 0; i < M; i++)
    {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        map[tmp1][tmp2] = true;
        map[tmp2][tmp1] = true;
    }

    reset();
    DFS(V);
    cout << endl;
    reset();
    BFS(V);
    cout << endl;

    return 0;
}