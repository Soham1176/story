#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<bool> isprime(N, true);
vector<int> hp(N, 0);

void sieve()
{
    isprime[0] = isprime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isprime[i] == true)
        {
            hp[i] = i;
            for (int j = (2 * i); j < N; j += i)
            {
                isprime[j] = false;
                hp[j] = i;
            }
        }
    }
}
int main()
{
    sieve();
    for (int i = 1; i < 100; i++)
    {
        cout << i << ' ' << hp[i] << endl;
    }
    return 0;
}