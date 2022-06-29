#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    cin.tie(0);
    cout.tie(0);

    int N, start, end, count = 1;

    vector<pair<int, int>> Mschedule;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> start >> end;
        Mschedule.push_back(pair<int, int>(end, start));
    }
    sort(Mschedule.begin(), Mschedule.end());

    int time = Mschedule[0].first;

    for (int i = 1; i < N; i++)
    {
        if (time <= Mschedule[i].second)
        {
            count++;
            time = Mschedule[i].first;
        }
    }

    cout << count << endl;
    return 0;
}