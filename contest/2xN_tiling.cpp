#include <iostream>
using namespace std;

int array1[1001];

void tileCount()
{
    array1[0] = 0;
    array1[1] = 1;
    for (int i = 0; i < 1001; i++)
    {
        array1[i + 2] = (array1[i + 1] + array1[i]) % 10007;
    }
}

int main()
{
    int N;
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    tileCount();
    cout << array1[(N + 1) % 10007] << endl;

    return 0;
}