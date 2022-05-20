// https://www.acmicpc.net/problem/5585

#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int price, i = 0, result = 0;
    int coin[] = {500, 100, 50, 10, 5, 1};

    cin >> price;

    int change = 1000 - price;
    while (i < 6)
    {
        if (change >= coin[i])
        {
            result += change / coin[i];
        }
        change %= coin[i++];
    }
    cout << result << endl;
    return 0;
}
