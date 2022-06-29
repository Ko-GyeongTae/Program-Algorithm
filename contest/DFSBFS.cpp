#include <iostream>
#include <queue>
using namespace std;

int N, M, V;
bool map[1001][1001] = {0};
bool Stack[1001] = {0};
queue<int> BFS_Queue;

void Reset()
{
    for (int i = 0; i <= N; i++)
    {
        Stack[i] = false;
    }
    return;
}

void DFS(int n)
{
    Stack[n] = true;
    cout << n << ' ';
    for (int i = 1; i <= N; i++)
    {
        if (map[n][i] == true && Stack[i] == false)
        {
            DFS(i);
        }
    }
    return;
}

void BFS(int n)
{
    BFS_Queue.push(n);
    Stack[n] = true;
    cout << n << ' ';

    while (!BFS_Queue.empty())
    {
        n = BFS_Queue.front();
        BFS_Queue.pop();

        for (int i = 0; i <= N; i++)
        {
            if (map[n][i] == true && Stack[i] == false)
            {
                BFS_Queue.push(i);
                Stack[i] = true;
                cout << i << ' ';
            }
        }
    }
    return;
}

int main()
{
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M >> V;
    for (int i = 0; i < M; i++)
    {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        map[tmp1][tmp2] = true;
        map[tmp2][tmp1] = true;
    }

    Reset();
    DFS(V);
    cout << endl;
    Reset();
    BFS(V);
    cout << endl;

    return 0;
}