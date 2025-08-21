#include <bits/stdc++.h>

using namespace std;

int findMinPosition(vector<int> &v)
{

    int best = INT_MAX;
    int minPosition = 0;
    for (int i = 0; i < 3; i++)
    {
        if (v[i] < best)
        {
            best = v[i];
            minPosition = i;
        }
    }

    return minPosition;
}

bool verify(vector<int> &v)
{

    int a = v[0], b = v[1], c = v[2];

    bool first = a >= b / 2 && a >= c / 2;

    bool second = b >= a / 2 && b >= c / 2;

    bool third = c >= a / 2 && c >= b / 2;

    return first && second && third;
}

int main()
{

    // ios::sync_with_stdio(0);
    // cin.tie(0);

    // Exercise difficulty: 800
    // Exercise name: Energy Crystals
    // Link to the exercise: https://codeforces.com/contest/2111/problem/A
    // Solution:

    int t = 0, x = 0;

    cin >> t;

    while (t)
    {
        cin >> x;
        vector<int> crystals = {0, 0, 0};

        bool completed = crystals[0] == x && crystals[1] == x && crystals[2] == x;
        int steps = 0;
        int minPosition = 0;

        bool rule = verify(crystals);

        while (!completed)
        {
            minPosition = findMinPosition(crystals);

            while (rule && crystals[minPosition] <= x)
            {
                crystals[minPosition]++;
                rule = verify(crystals);
                
            }

            cout << "hello\n";

            crystals[minPosition]--;
            rule = verify(crystals);

            completed = crystals[0] == x && crystals[1] == x && crystals[2] == x;
            steps++;
        }

        cout << steps << "\n";

        t--;
    }

    return 0;
}