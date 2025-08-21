#include <bits/stdc++.h>

using namespace std;

void solve(deque<char> &init, int &m, string &b, string &c)
{

    for (int i = 0; i < m; i++)
    {
        if (c[i] == 'V')
        {
            init.push_front(b[i]);
        }
        else
        {
            init.push_back(b[i]);
        }
    }
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: N/A
    // Exercise name: Homework
    // Link to the exercise: https://codeforces.com/contest/2132/problem/A
    // Solution:

    int t = 0, n = 0, m = 0;

    string a = "", b = "", c = "";

    cin >> t;

    while (t)
    {
        cin >> n;
        cin >> a;
        cin >> m;
        cin >> b;
        cin >> c;

        deque<char> result;

        for (int i = 0; i < n; i++)
        {
            result.push_back(a[i]);
        }

        solve(result, m, b, c);

        for (auto x : result)
        {
            cout << x;
        }

        cout << "\n";

        t--;
    }

    return 0;
}