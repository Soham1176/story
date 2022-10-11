#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<bool> isprime(N, true);
vector<int> lp(N, 0);

void sieve()
{
    isprime[0] = isprime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isprime[i] == true)
        {
            lp[i] = i;
            for (int j = (2 * i); j < N; j += i)
            {
                isprime[j] = false;
                if (lp[j] == 0)
                    lp[j] = i;
            }
        }
    }
}

int main()
{
    sieve();

    for (int i = 1; i < 100; i++)
    {
        cout << i << ' ' << lp[i] << endl;
    }

    return 0;
}