#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve(ll &n)
{

    ll p = 0;
    ll num = 1;
    ll control = num + pow(10, p);

    vector<ll> ans;

    while (control <= n)
    {
        if (n % control == 0 && control % 10 == 1)
        {
            ans.push_back(n / control);
        }

        p++;
        control = num + pow(10, p);        
    }

    
    if (ans.size() > 0)
    {
        cout << ans.size() << "\n";
        sort(ans.begin(), ans.end());
        for (auto x : ans)
        {
            cout << x << " ";
        }
    }
    else
    {
        cout << 0;
    }

    cout << "\n";
}

int main()
{

    // ios::sync_with_stdio(0);
    // cin.tie(0);

    // Exercise difficulty: N/A
    // Exercise name: The secret number
    // Link to the exercise: https://codeforces.com/contest/2132/problem/B
    // Solution:

    int t = 0;
    ll n = 0;

    cin >> t;

    while (t)
    {
        cin >> n;

        solve(n);

        t--;
    }

    return 0;
}