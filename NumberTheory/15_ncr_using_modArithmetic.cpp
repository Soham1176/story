#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

// This is iterative method of finding the a raised to b mod m when all the values of a , b , mod are integer.
// for (a/b)%mod --> use ( (a%mod) * (binExpoIter(b , mod-2 , mod) ) % mod.
int binExpoIter(int a, int b, int m)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = ((ans % m) * 1LL * (a % m)) % m;
        }
        a = ((a % m) * 1LL * (a % m)) % m;
        b >>= 1;
    }
    return ans;
}

vector<int> fact(101);

int ncr(int n, int r)
{
    int num = fact[n];
    int den = (fact[r] * fact[n - r]) % mod;

    cout << num << " " << den << endl;
    int b = (binExpoIter(den, mod - 2, mod));
    cout << b << endl;

    return ((num % mod) * (b)) % mod;

    return ((fact[n] % mod) * (binExpoIter(fact[r] * fact[n - r], mod - 2, mod) % mod)) % mod;
}

int main()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < 101; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
    }

    int n, r;
    cin >> n >> r;

    cout << ncr(n, r);

    return 0;
}
 