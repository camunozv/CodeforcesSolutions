#include <bits/stdc++.h>

using namespace std;

int euclides_algorithm(int a, int b);

int solution(int x);

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: 800
    // Exercise name: A. Maximize?
    // Link to the exercise: https://codeforces.com/problemset/problem/1968/A

    // Solution:

    int t = 0;

    cin >> t;

    vector<int> test_cases(t);

    for (int i = 0; i < t; i++) {
        cin >> test_cases[i];
    }

    for (int i = 0; i < t; i++) {
        cout << solution(test_cases[i]) << "\n";
    }

    return 0;
}

int euclides_algorithm(int a, int b) {

    int big = a > b ? a : b;
    int small = a >= b ? b : a;

    int mod = big % small;
    int mcd = small;

    while (mod != 0) {
        big = small;
        small = mod;

        mod = big % small;
        mcd = small;
    }

    return mcd;
}

int solution(int x) {

    int max = 0;
    int possible = 0;
    for (int i = 1; i < x; i++) {
        possible = euclides_algorithm(i, x) + i;
        if (possible > max) {
            max = possible;
        }
    }
    max -= 1;
    return max;
}