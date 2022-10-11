#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

const int siezeOfNcrTable = 101;
vector<vector<int>> ncrTable(siezeOfNcrTable, vector<int>(siezeOfNcrTable));
void ncrCalci()
{
    for (int i = 0; i < siezeOfNcrTable; i++)
    {
        ncrTable[0][i] = 0;
        ncrTable[i][0] = 1;
    }

    for (int i = 1; i < siezeOfNcrTable; i++)
    {
        for (int j = 1; j < siezeOfNcrTable && j <= i; j++)
        {
            if (i == 1 && j == 1)
                ncrTable[i][j] = 1;

            ncrTable[i][j] = ((ncrTable[i - 1][j] % mod) + (ncrTable[i - 1][j - 1] % mod)) % mod;
        }
    }
}

int main()
{
    ncrCalci();
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;

        cout << ncrTable[n][r] << endl;
    }

    return 0;
}