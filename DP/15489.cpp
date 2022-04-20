#include <iostream>
using namespace std;

int pascal[31][31], R, C, W;
long long sum = 0;
int main()
{

    pascal[0][0] = 1;
    for (int i = 1; i <= 30; i++)
    {
        pascal[i][0] = 1;
        pascal[i][i] = 1;
        for (int j = 1; j < i; j++)
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
    }

    cin >> R >> C >> W;

    for (int i = 0; i < W; i++)
        for (int j = 0; j < i + 1; j++)
        {
            sum += pascal[R - 1 + i][C - 1 + j];
        }

    cout << sum;

    return 0;
}