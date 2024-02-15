#include<bits/stdc++.h>
using namespace std;

//printing the binary number
void printBinary(int num)
{
    cout << endl << "The equivalent binary form is" << endl;
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
}