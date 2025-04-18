#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b, int c, int d)
{

    int games = 0;
    if (a > c && b > d)
    {
        games += 2;
    }

    if (a > d && b > c)
    {
        games += 2;
    }

    return games;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: 1000
    // Exercise name: Card Game
    // Link to the exercise: https://codeforces.com/problemset/problem/1999/B
    // Solution:
    int t = 0;

    cin >> t;

    int a, b, c, d;

    int k = 0;

    while (k < t)
    {
        cin >> a >> b >> c >> d;
        cout << solve(a, b, c, d) << "\n";
        k++;
    }

    return 0;
}