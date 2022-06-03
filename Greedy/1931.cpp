// https://www.acmicpc.net/problem/1931

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, start, end;

    vector<pair<int, int>> schedule;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> start >> end;
        schedule.push_back(pair<int, int>(end, start));
    }
    sort(schedule.begin(), schedule.end());

    int meetTime = schedule[0].first;
    int count = 1;
    for (int i = 1; i < N; i++)
    {
        if (meetTime <= schedule[i].second)
        {
            count++;
            meetTime = schedule[i].first;
        }
    }

    cout << count << endl;
    return 0;
}
