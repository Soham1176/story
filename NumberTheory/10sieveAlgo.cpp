#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> isprime(N, 1);
void sieve()
{
    isprime[0] = isprime[1] = false;
    for (int i = 2; i < N; i++)
    {

        if (isprime[i] == true)
        {
            for (int j = (2 * i); j < N; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}

int main()
{
    sieve();

    for (int i = 1; i < 100; i++)
    {
        cout << i << ' ' << isprime[i] << '\n';
    }
    return 0;
}