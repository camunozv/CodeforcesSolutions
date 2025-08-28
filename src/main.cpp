#include <bits/stdc++.h>
#define ui unsigned long long

using namespace std;

ui solve(ui &n)
{
    ui p, control, coins = 0;

    do
    {
        p = 0, control = 0;

        while (control <= n)
        {
            p++;
            control = pow(3, p);
        }

        p--;

        if (p > 0)
        {
            coins += pow(3, p + 1) + (p * pow(3, p - 1));
        }
        else
        {
            coins += pow(3, p + 1);
        }

        n -= pow(3, p);

    } while (n > 0);

    return coins;
}

int main()
{

    // ios::sync_with_stdio(0);
    // cin.tie(0);

    // Exercise difficulty: 1000
    // Exercise name: The cunning seller
    // Link to the exercise: https://codeforces.com/problemset/problem/2132/C1
    // Solution:

    int t = 0;
    ui n = 0;

    cin >> t;

    while (t)
    {
        cin >> n;

        cout << solve(n) << "\n";

        t--;
    }

    return 0;
}