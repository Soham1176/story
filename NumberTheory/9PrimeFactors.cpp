#include <bits/stdc++.h>
using namespace std;

void primeFactors(int n)
{
    vector<int> v;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        v.push_back(n);

    for (auto prime : v)
        cout << prime << " ";
    cout << endl;
}

int main()
{
    primeFactors(36);
    primeFactors(24);

    return 0;
}