#include <iostream>

using namespace std;

int _sum(int n)
{
    if (n <= 0)
    {
        return 0;
    }

    return n + _sum(n - 1);
}

int sum(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return 2 * sum(n / 2) + ((n + 1) / 2) * ((n + 1) / 2);
}

int main()
{
    cout << sum(600000) << endl;
    return 0;
}
