#include <bits/stdc++.h>

using namespace std;

int solve(string s, string t) {

    int i = 0, j = 0, k = 0;
    unsigned int n = s.size(), m = t.size();
    while (i < n && j < m && s[i] == t[i]) {
        i++;
        j++;
        k++;
    }
    if (k > 0) {
        k++;
    }

    k += n - i;
    k += m - j;

    return k;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q = 0, i = 0;
    cin >> q;
    string s, t;
    while (i < q) {
        cin >> s >> t;
        cout << solve(s, t) << "\n";
        i++;
    }

    return 0;
}
