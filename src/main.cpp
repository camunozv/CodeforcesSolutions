#include <bits/stdc++.h>

using namespace std;

void countOnes(string str, int &count, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            count++;
        }
    }
}

string solve(string readString, int k)
{
    
    if (readString[k] == '0')
    {
        readString[k] = '1';
    }
    else
    {
        readString[k] = '0';
    }

    return readString;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: N/A
    // Exercise name: Dr.TC
    // Link to the exercise:
    // Solution:

    int t = 0;
    cin >> t;

    while (t > 0)
    {

        int n = 0;
        cin >> n;

        string readString;
        cin >> readString;

        vector<string> matrix(n);

        for (int i = 0; i < n; i++)
        {
            matrix[i] = solve(readString, i);
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            countOnes(matrix[i], count, n);
        }

        cout << count << "\n";

        count = 0;
        t--;
    }

    return 0;
}