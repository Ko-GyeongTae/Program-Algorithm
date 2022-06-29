#include <iostream>
using namespace std;

int N, menuPrice[1001], DP[1001] = {0};

int main()
{
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> menuPrice[i];
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            DP[i] = max(DP[i], DP[i - j] + menuPrice[j]);
        }
    }

    cout << DP[N] << endl;
    return 0;
}