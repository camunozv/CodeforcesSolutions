#include <bits/stdc++.h>

using namespace std;

int solve(int k, vector<int> arr) {
    int c = 0, r = 0;
    for (auto n: arr) {
        if (n == 0 && r > 0) {
            r--;
            c++;
        } else if (n >= k) {
            r += n;
            n = 0;
        }
    }

    return c;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: 800
    // Exercise name: Robin Helps
    // Link to the exercise: https://codeforces.com/contest/2014/problem/A
    // Solution:
    int t = 0;
    cin >> t;
    int i = 0, n = 0, k = 0;
    while (i < t) {
        cin >> n >> k;
        vector<int> people(n);
        for (int r = 0; r < n; r++) {
            cin >> people[r];
        }
        cout << solve(k, people) << "\n";
        i++;
    }

    return 0;
}