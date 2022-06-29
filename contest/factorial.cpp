#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{
    int N;
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    cout << factorial(N) << endl;
    return 0;
}