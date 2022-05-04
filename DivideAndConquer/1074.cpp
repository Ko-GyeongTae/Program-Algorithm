// https://www.acmicpc.net/problem/1074

#include <iostream>
#include <cmath>

using namespace std;

int n, r, c;
int result;

void searchZ(int x, int y, int size)
{
    if (y == r && x == c)
    {
        cout << result << endl;
        return;
    }

    if (r < y + size && r >= y && c < x + size && c >= x)
    {
        searchZ(x, y, size / 2);
        searchZ(x + size / 2, y, size / 2);
        searchZ(x, y + size / 2, size / 2);
        searchZ(x + size / 2, y + size / 2, size / 2);
    }
    else
    {
        result += size * size;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> r >> c;
    searchZ(0, 0, pow(2, n));

    return 0;
}