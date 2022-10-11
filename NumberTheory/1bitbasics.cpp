#include <bits/stdc++.h>
using namespace std;
void printBinary(int num)
{
    for (int i = 15; i >= 0; --i)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int countBit(int n)
{
    int cnt = 0;
    for (int i = 0; i < 32; i++)
        if (n & (1 << i))
            cnt++;
    return cnt;
}

int main()
{
    int n = 23;
    // printing number in binary
    printBinary(n);

    // check bit
    int i = 5;
    if (n & (1 << i))
        cout << "Set bit \n";
    else
        cout << "Not Set Bit \n";

    // set Ith bit;
    printBinary((n | (1 << i)));

    // unset the jth bit
    int j = 3;
    printBinary(n & (~(1 << j)));

    // toggling of the bit
    printBinary(n ^ (1 << j));

    // count bit
    cout << countBit(n);
    return 0;
}