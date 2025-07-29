#include <bits/stdc++.h>

using namespace std;




int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: N/A
    // Exercise name: Recycling Center
    // Link to the exercise: https://codeforces.com/contest/2128/problem/A
    // Solution:

    int t = 0;
    cin >> t;

    int n = 0;
    int c = 0;

    while (t)
    {
        cin >> n;
        cin >> c;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        t--;
    }

    return 0;
}