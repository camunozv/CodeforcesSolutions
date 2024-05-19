#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: 800
    // Exercise name: Elephant
    // Link to the exercise: https://codeforces.com/problemset/problem/617/A

    // Solution:
    int house = 0;

    cin >> house;

    int steps = house / 5;
    if (house % 5 == 0){
        cout << steps << "\n";
    } else {
        steps += 1;
        cout << steps << "\n";
    }

    return 0;
}
