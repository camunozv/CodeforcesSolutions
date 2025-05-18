#include <bits/stdc++.h>

using namespace std;

vector<int> solve(int &n, int &x)
{
    vector<int> result(n);

    for (int i = 0; i < x; i++)
    {
        result[i] = i;
    }

    for (int i = x; i < n - 1; i++)
    {
        result[i] = i + 1;
    }

    result[n - 1] = x;

    return result;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: N/A
    // Exercise name: St. Chroma
    // Link to the exercise: https://codeforces.com/problemset/problem/2106/B
    // Solution:

    int t = 0;
    cin >> t;

    while (t > 0)
    {

        int n = 0;
        cin >> n;

        int x = 0;
        cin >> x;

        for(auto x: solve(n, x)) {
            cout << x << " ";
        }

        cout << "\n";

        t--;
    }

    return 0;
}