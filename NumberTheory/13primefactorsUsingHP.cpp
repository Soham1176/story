#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<bool> isPrime(N, true);
vector<int> hp(N, 0);
vector<int> lp(N, 0);
vector<int> PrimeFact[N];

int main()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            hp[i] = i;
            lp[i] = i;
            for (int j = (2 * i); j < N; j += i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j] == 0)
                    lp[j] = i;
            }
        }
    }

    for (int i = 2; i < N; i++) // prime factorization using hp.
    {
        int num = i;

        while (num > 1)
        {
            int prime = hp[num];
            while (num % prime == 0)
            {
                num /= prime;
                // PrimeFact[i].push_back(prime); // if we want repeated prime .
            }
            PrimeFact[i].push_back(prime); // repeated prime numbers are taken only one time.
        }
    }

    // for (int i = 1; i < 100; i++)
    // {
    //     cout << i << ' ' << hp[i] << ' ' << lp[i] << endl;
    // }

    for (int i = 1; i < 100; i++)
    {
        cout << i << "  -->  ";
        for (int j = 0; j < PrimeFact[i].size(); j++)
        {
            cout << PrimeFact[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}