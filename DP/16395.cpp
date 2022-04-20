// https://www.acmicpc.net/problem/16395

#include <iostream>
using namespace std;

int pascal[31][31], n, k;
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

    cin >> n >> k;

    cout << pascal[n - 1][k - 1];

    return 0;
}