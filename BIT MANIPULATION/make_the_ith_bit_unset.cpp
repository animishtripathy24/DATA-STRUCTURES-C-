#include<bits/stdc++.h>
using namespace std;

//printing the binary number
void printBinary(int num)
{
    cout << endl;
    for(int i=10;i>=0;i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main()
{
    printBinary(9);
    int i=2;
    cout << "Number after the " << i << "th bit is set" << endl;
    printBinary(9 | (1<<i));

    //now we have to make the 3rd bit unset
    int j=3;
    cout << "Number after the " << j << "th bit is unset" << endl;
    printBinary(9 & ~(1<<j));
}