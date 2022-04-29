// https://www.acmicpc.net/problem/11728

#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    int *A, *B, *result;
    cin >> N >> M;

    A = new int[N];
    B = new int[M];
    result = new int[N + M];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    int i = 0, j = 0, k = 0;
    while (i < N && j < M)
    {
        if (A[i] < B[j])
        {
            result[k++] = A[i++];
        }
        else
        {
            result[k++] = B[j++];
        }
    }

    while (i < N)
    {
        result[k++] = A[i++];
    }

    while (j < M)
    {
        result[k++] = B[j++];
    }

    for (int i = 0; i < N + M; i++)
    {
        cout << result[i] << ' ';
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] result;

    return 0;
}