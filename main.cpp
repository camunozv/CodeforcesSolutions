#include <bits/stdc++.h>

using namespace std;

void solve_string(string chain);

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: --
    // Exercise name: Strong Password
    // Link to the exercise: https://codeforces.com/contest/1997/problem/A

    // Solution:

    int t = 0;
    cin >> t;

    int i = 0;

    while (i < t) {

        string case_test;
        cin >> case_test;
        solve_string(case_test);
        i++;
    }


    return 0;
}

void solve_string(string chain) {

    vector<char> alphabet = {
            'a', 'b', 'c', 'd',
            'e', 'f', 'g', 'h',
            'i', 'j', 'k', 'l',
            'm', 'n', 'o', 'p',
            'q', 'r', 's', 't',
            'u', 'v', 'w', 'x',
            'y', 'z'
    };

    int n = chain.size();
    int i = 0;
    bool equality = false;

    while (i < n - 1 && !equality) {
        if (chain[i] == chain[i + 1]) {
            equality = true;
        }
        i++;
    }

    i--;

    if (equality) {
        vector<char> chain_2;
        for (int j = 0; j <= i; j++) {
            chain_2.push_back(chain[j]);
        }
        int k = 0;
        while (chain_2[i] == alphabet[k]) {
            k++;
        }

        chain_2.push_back(alphabet[k]);

        for (int r = i + 1; r < n; r++) {
            chain_2.push_back(chain[r]);
        }

        for (auto letter: chain_2) {
            cout << letter;
        }

        cout << "\n";

    } else {
        int k = 0;
        while (chain[n - 1] == alphabet[k]) {
            k++;
        }

        chain.push_back(alphabet[k]);

        for (auto letter: chain) {
            cout << letter;
        }

        cout << "\n";
    }

}