#include <bits/stdc++.h>

using namespace std;

int solve(string answers);

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 0;
    int n = 0;
    int i = 0;

    cin >> t;

    while (i < t) {
        cin >> n;
        string answers;
        cin >> answers;

        cout << solve(answers) << "\n";
        i++;
    }

    return 0;
}

int solve(string answers) {

    int result = 0;
    int n = answers.size();
    map<char, int> my_map;
    my_map['A'] = n / 4;
    my_map['B'] = n / 4;
    my_map['C'] = n / 4;
    my_map['D'] = n / 4;

    for (int i = 0; i < n; i++) {
        if (answers[i] != '?' && my_map[answers[i]] > 0) {
            my_map[answers[i]] -= 1;
            result++;
        }
    }

    return result;
}