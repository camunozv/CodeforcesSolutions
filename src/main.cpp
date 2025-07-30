#include <bits/stdc++.h>

using namespace std;

void multiply_vector(vector<int> &v, int i, int n)
{
    for (int j = i; j >= 0; j--)
    {
        v[j] *= 2;
    }
}

int solve(vector<int> &v, int c, int n)
{

    int coin_counter = n;

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] <= c)
        {
            coin_counter--;
            multiply_vector(v, i - 1, n);
        }
        
    }

    return coin_counter;
}

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

        cout << solve(v, c, n) << "\n";

        t--;
    }

    return 0;
}