#include <bits/stdc++.h>

using namespace std;

int calculateVolume(int &w, int &h, int &l)
{
    return w * h * l;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: 1100
    // Exercise name: Fibonacci cubes
    // Link to the exercise: https://codeforces.com/problemset/problem/2111/B
    // Solution:

    int t = 0;

    cin >> t;

    int n = 0;
    int m = 0;

    int w = 0;
    int l = 0;
    int h = 0;

    // vector<int> fibonacciNumbers = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    // vector<int> volumes = {1, 8, 27, 125, 512, 2197, 9261, 39304, 166375, 704969};
    vector<int> adds = {1, 9, 36, 161, 673, 2870, 12131, 51435, 217810, 922779};

    string s = "";

    while (t)
    {
        cin >> n;
        cin >> m;

        while (m)
        {

            cin >> w;
            cin >> l;
            cin >> h;

            int volume = calculateVolume(w, h, l);

            if (volume > adds[n - 1])
            {
                cout << "Volume: " << volume << "\n";
                cout << "Adds: " << adds[n - 1] << "\n";
                s += "1";
            }
            else
            {
                s += "0";
            }

            m--;
        }

        cout << s << "\n";
        s = "";

        t--;
    }

    return 0;
}