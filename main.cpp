#include <bits/stdc++.h>

using namespace std;

int different_indices(string base_string, string string_to_compare);

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: 800
    // Exercise name: A love story
    // Link to the exercise: https://codeforces.com/problemset/problem/1829/A

    // Solution:
    string base_string = "codeforces";

    int test_cases = 0;

    cin >> test_cases;

    vector<string> my_strings(test_cases);

    for (int i = 0; i < test_cases; i++) {
        cin >> my_strings[i];
    }

    for (int i = 0; i < test_cases; i++) {
        cout << different_indices(base_string, my_strings[i]) << "\n";
    }

    return 0;
}

int different_indices(string base_string, string string_to_compare) {
    int differences = 0;
    int n = 10;
    for (int i = 0; i < n; i++) {
        if (base_string[i] != string_to_compare[i]) {
            differences++;
        }
    }
    return differences;
}