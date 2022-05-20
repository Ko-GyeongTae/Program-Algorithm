#include <iostream>

using namespace std;

int main()
{
    int arr[3], tmp;

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
    return 0;
}