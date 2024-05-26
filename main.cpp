#include <bits/stdc++.h>

using namespace std;

int min_max_swap(vector<int> &a, vector<int> &b, int n);

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: 800
    // Exercise name: Min Max swap
    // Link to the exercise: https://codeforces.com/problemset/problem/1631/A

    // Solution:

    int t = 0;
    cin >> t;

    int i = 0;
    int n = 0;

    while (i < t) {
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }

        for (int j = 0; j < n; j++) {
            cin >> b[j];
        }

        cout << min_max_swap(a, b, n) << "\n";
        i++;
    }

    return 0;
}

int min_max_swap(vector<int> &a, vector<int> &b, int n) {

    int swap = 0;

    for (int i = 0; i < n; i++) {
        if (b[i] > a[i]) {
            swap = a[i];
            a[i] = b[i];
            b[i] = swap;
        }
    }

    int max_a = a[0];
    int max_b = b[0];

    for (int i = 1; i < n; i++) {

        if (a[i] > max_a) {
            max_a = a[i];
        }
        if (b[i] > max_b) {
            max_b = b[i];
        }
    }

    return max_a * max_b;
}