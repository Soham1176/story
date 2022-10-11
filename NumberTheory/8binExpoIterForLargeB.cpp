#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;

int binExpoIter(int a, long long b, int m)
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
        b >>= 1;
    }
    return ans;
}

int main()
{

    // if we want to calculete the value of the 75^8943^7457
    // practically its not possible as b is such a huge no which is  not feasible for us to keep it divide by 2;
    // thats why we use ETF theorem here , in this we reduce the value of the b as by using etf value.

    // for calculating 75^475^3784

    cout << binExpoIter(75, binExpoIter(475, 3784, mod), mod) << endl;

    return 0;
}

