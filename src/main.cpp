#include <bits/stdc++.h>

using namespace std;

bool solve(vector<int> &s, int &n)
{

    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (s[i] == i + 1)
        { // if the number is already in its place
            count++;
        }
        else if (i + 1 < n && abs(s[i] - s[i + 1] == 1))
        {
            // Check if they go to their place
            if (s[i] == i + 2 && s[i + 1] == i + 1)
            {
                count += 2;
            }
        }
    }

    return count == n;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: N/A
    // Exercise name: Penchick and Satay Sticks
    // Link to the exercise: https://codeforces.com/problemset/problem/2031/B
    // Solution:

    int t = 0;
    cin >> t;

    while (t > 0)
    {

        int n = 0;
        cin >> n;

        vector<int> numbers(n);

        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        if (solve(numbers, n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

        t--;
    }

    return 0;
}