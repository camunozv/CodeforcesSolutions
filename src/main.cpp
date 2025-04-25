#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    // Exercise difficulty: N/A
    // Exercise name: Dr.TC
    // Link to the exercise: 
    // Solution:

    // Im testing a little bit the use of bitmasks. Integers can store up to 32
    // bits, so we can manipulate them.
    
    // << -> this operand is truly a bit shift.

    // So here what we are doing is shifting the number one by 0 positions, remains equal
    // the second one we are shifting 0 by 4 positions which make it remain equal.
    // so we can multiply by the power of two. Hence we are applying bitshift.
    
    // (1 << 0) -> bit 0 is now ON = 1
    // (0 << 4) -> bit 1 is now OFF = 0

    int k = (1 << 0) | (1 << 1);

    cout << k << "\n";

    k = (0 << 1);
    
    cout << k << "\n";

    return 0;
}