// inverse of A under modulo M
#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;

// A naive method to find modular
// multiplicative inverse of 'A'
// under modulo 'M'

int modInverse(int A, int M)
{
    for (int X = 1; X < M; X++)
        if (((A % M) * (X % M)) % M == 1)
            return X;
}

// Driver code
int main()
{
    int A = 4, M = mod;

    // Function call
    cout << modInverse(A, M);
    return 0;
}