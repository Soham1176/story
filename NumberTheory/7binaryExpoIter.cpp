#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
#define ll long long

int binExpoIter(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = ((ans % mod) * 1LL * (a % mod)) % mod;
        }
        a = ((a % mod) * 1LL * (a % mod)) % mod;
        b >>= 1;
    }
    return ans;
}

long long binMultiply(long long a, long long b)
{
    long long ans = 0;
    while (b)
    {
        if (b & 1)
        {
            ans = ((ans % mod) + (a % mod)) % mod;
        }
        a = ((a % mod) + (a % mod)) % mod;
        b >>= 1;
    }
    return ans;
}

// we are using this fun when value of a or mod is upto 1e18 .
// at that time while multiplying the value of the multipln can exceed 1e18 which cannot be store. that's why we are using binMultiply
long long binExpoIterll(long long a, long long b)
{
    long long ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (binMultiply(ans, a)) % mod;
        }
        a = (binMultiply(a, a)) % mod;
        b >>= 1;
    }
    return ans;
}

int main()
{
    cout << binExpoIter(985, 8345) << endl;
    cout << binExpoIterll(34875897525, 27589749857);

    return 0;
}