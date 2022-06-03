// https://www.acmicpc.net/problem/10816

#include <iostream>
#include <algorithm>

using namespace std;

int N, M, cards[500001];

int lowerBound(int arg)
{
    int index = 0, cardCount = N - 1, pointer;
    while (true)
    {
        pointer = (index + cardCount) / 2;

        if (index > cardCount)
        {
            if (cards[index] == arg)
                return index;
            else
                return -1;
        }

        if (cards[pointer] >= arg)
            cardCount = pointer - 1;
        else
            index = pointer + 1;
    }
}

int upperBound(int n)
{
    int index = 0, cardCount = N - 1, pointer;
    while (true)
    {
        pointer = (index + cardCount) / 2;

        if (index > cardCount)
        {
            if (cards[cardCount] == n)
                return cardCount;
            else
                return -1;
        }

        if (cards[pointer] <= n)
            index = pointer + 1;
        else
            cardCount = pointer - 1;
    }
}

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> cards[i];
    sort(cards, cards + N);

    cin >> M;
    int n, res;
    for (int i = 0; i < M; i++)
    {
        cin >> n;
        res = upperBound(n);
        if (res == -1)
            cout << "0 ";
        else
            cout << res - lowerBound(n) + 1 << " ";
    }
    cout << endl;
    return 0;
}