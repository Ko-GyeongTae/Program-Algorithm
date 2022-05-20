#include <iostream>

using namespace std;

int main()
{
    int arr[51], N, tmp, count = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}