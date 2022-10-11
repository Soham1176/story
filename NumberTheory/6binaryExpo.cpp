#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int mod = 1e9 + 7;

ll binExpoRec(int a, int b)
{
    if (b == 0)
        return 1;
    int result = binExpoRec(a, b / 2);
    if (b & 1)
        return ((a % mod) * ((1LL * result * result) % mod)) % mod;
    return ((1LL * result * result) % mod);
}

int main()
{

    cout << binExpoRec(30000, 13) << endl;
    return 0;
}