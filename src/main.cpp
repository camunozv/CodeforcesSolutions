#include <bits/stdc++.h>

using namespace std;

bool check1(vector<int> &a, vector<int> &b, int n)
{
    bool flag = true;
    int i = 0;
    while (i < n && flag)
    {
        if (a[i] > b[i])
        {
            flag = false;
            a[i] -= 1;
        }

        i++;
    }

    return !flag;
}

bool check2(vector<int> &a, vector<int> &b, int n)
{
    bool flag = true;
    int i = 0;
    while (i < n && flag)
    {
        if (a[i] < b[i])
        {
            flag = false;
            a[i] += 1;
        }

        i++;
    }

    return !flag;
}

int solve(vector<int> &a, vector<int> &b, int n)
{

    int iterations = 1;

    while (check1(a, b, n))
    {
        check2(a, b, n);
        iterations++;
    }

    return iterations;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: N/A
    // Exercise name: Lever
    // Link to the exercise: https://codeforces.com/contest/2131/problem/A
    // Solution:

    int t = 0;

    cin >> t;

    int n = 0;

    while (t)
    {
        cin >> n;

        vector<int> v(n);
        vector<int> w(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }

        cout << solve(v, w, n) << "\n";

        t--;
    }

    return 0;
}