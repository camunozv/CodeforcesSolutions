#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b)
{
    int ret = 0;
    if (a > b) {
        ret = 1;
    } else if (a < b){
        ret = -1;
    } 
    return ret;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: 1000
    // Exercise name: Card Game
    // Link to the exercise: https://codeforces.com/problemset/problem/1999/B
    // Solution:
    int t = 0;

    cin >> t;

    int a, b, c, d;

    int k = 0;

    int ans = 0;
    while (k < t)
    {
        cin >> a >> b >> c >> d;
        
        // Bajo este esquema de solución podemos contar las respuestas, sin necesidad de
        // pensar en todos los casos.

        // Es válido pensar en que alguien gana si hay 2 números iguales, por que nadie gana
        // en esa ronda, mientras que en la otra, seguramente alguien ganará (2 números diferentes)
        if (solve(a, c) + solve(b, d) > 0) {
            ans += 2;
        }

        if (solve(a, d) + solve(b, c) > 0) {
            ans += 2;
        }

        cout << ans << "\n";
        ans = 0;
        k++;
    }

    return 0;
}