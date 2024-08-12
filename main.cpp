#include <bits/stdc++.h>

using namespace std;

int solve(int number);
int main () {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int test_cases = 0;

    cin >> test_cases;

    while(test_cases > 0) {

        int number = 0;
        cin >> number;

        cout << solve(number) << "\n";

        test_cases--;
    }

    return 0;
}

int solve(int number) {

    int a = number / 10;
    int b = number % 10;

    return a + b;
}