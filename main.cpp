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

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        // function that solves the problem goes here.

        cout << min_max_swap(a, b, n) << "\n";
        i++;
    }

    return 0;
}

int min_max_swap(vector<int> &a, vector<int> &b, int n) {

    int max_a = a[n - 1];
    int max_b = b[n - 1];
    int swap = 0;
    int prod = 0;
    if (max_a > max_b) {
        for (int i = 0; i < n; i++) {
            if (b[n - 1 - i] > a[i]) {
                swap = a[i];
                a[i] = b[n - 1 - i];
                b[n - 1 - i] = swap;
            }
        }

        swap = b[0];
        for (int i = 1; i < n; i++) {
            if (b[i] > swap) {
                swap = b[i];
            }
        }

        prod = max_a;

    } else {
        for (int i = 0; i < n; i++) {
            if (b[i] < a[n - 1 - i]) {
                swap = b[i];
                b[i] = a[n - 1 - i];
                a[n - 1 - i] = swap;
            }
        }

        swap = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] > swap) {
                swap = a[i];
            }
        }

        prod = max_b;
    }

    return swap * prod;
}