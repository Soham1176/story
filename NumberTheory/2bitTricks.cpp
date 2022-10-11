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

int main()
{

    // even odd check
    int a = 10;
    if (a & 1)
        cout << a << " is Odd \n";
    else
        cout << a << " is Even \n";

    int b = 10;
    // multiply by 2;
    cout << "multiply and divide \n";
    printBinary(b);
    printBinary(b << 1);
    cout << (b << 1) << endl;
    // divide by 2
    printBinary(b >> 1);
    cout << (b >> 1) << endl;

    // Lowercase to upppercase
    cout << "Lower to upper \n";
    char lower1 = 'c';
    cout << char(lower1 & (~(1 << 5))) << endl;
    cout << char(lower1 & '_') << endl;

    // Uppercase to lowercase
    cout << "upper to lowercase \n";
    char upper1 = 'D';
    cout << char(upper1 | (1 << 5)) << endl;
    cout << char(upper1 | ' ') << endl;

    // usetting i LSB bits
    cout << "\nusetting i LSB bits \n";
    int n = 59;
    printBinary(n);
    int i = 3;
    /*
    0000000000110000 this is the ans for clearing i lsb bits -- go by reverse order ! (down to up)
    ==
    0000000000111011  --> n
    &
    11111111111100000 --> ~ ((1 << (i+1)) - 1)
    00000000000011111 --> ((1 <<( i+1) )- 1)
    00000000000100000 --> (1 << (i+1))
    */
    printBinary(n & (~((1 << (i + 1)) - 1))); // cleared first 4 lsb bits.
    // printBinary((1 << (i + 1)));           -->0000000000010000
    // printBinary(((1 << (i + 1)) - 1));     -->0000000000001111
    // printBinary(~((1 << (i + 1)) - 1));   -- >1111111111110000
    cout << endl;

    // unsetting  MSB bits after i  index
    cout << "unsetting  MSB bits after i  index \n";
    printBinary(n);
    i = 3;
    /*
    0000000000001011    -->   (n & ((1<<(i+1)) - 1))
    ==
    0000000000111011      --> n
    0000000000001111      --> ((1<<(i+1)) - 1)
    0000000000010000 - 1  --> (1<<(i+1))
    */
    printBinary(n & ((1 << (i + 1)) - 1));

    return 0;
}
