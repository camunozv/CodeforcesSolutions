#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> &v, string &s, int n)
{

    for (int i = 0; i < n / 2; i++)
    {
        int k1 = 0, k2 = 0;
        if (i % 2 == 0)
        {
            k1 = max(v[i], v[n - i - 1]);
            k2 = min(v[i], v[n - i - 1]);
            if (k1 == v[i])
            {
                s += "L";
            }
            else
            {
                s += "R";
            }

            if (k2 == v[i])
            {
                s += "L";
            }
            else
            {
                s += "R";
            }
        }
        else
        {
            k1 = min(v[i], v[n - i - 1]);
            k2 = max(v[i], v[n - i - 1]);

            if (k1 == v[i])
            {
                s += "L";
            }
            else
            {
                s += "R";
            }

            if (k2 == v[i])
            {
                s += "L";
            }
            else
            {
                s += "R";
            }
        }
    }

    if (n % 2 == 1)
    {
        s += "L";
    }
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: N/A
    // Exercise name: Dequeue Process
    // Link to the exercise: https://codeforces.com/contest/2128/problem/B
    // Solution:

    int t = 0;

    cin >> t;

    int n = 0;

    while (t)
    {
        cin >> n;

        vector<int> v(n);
        string s = "";

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        solve(v, s, n);

        cout << s << "\n";

        t--;
    }

    return 0;
}