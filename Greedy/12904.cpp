#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string S, T;
    bool result = false;
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> S >> T;

    while (true)
    {
        if (S.length() == T.length())
        {
            if (S == T)
            {
                result = true;
            }
            break;
        }
        // T -> S가 성립하는가?
        char tmp = T[T.length() - 1];
        T.pop_back();
        if (tmp == 'B')
        {
            reverse(T.begin(), T.end());
        }
    }
    cout << result << endl;
    return 0;
}