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
}

int main()
{
    int a=9;
    printBinary(9);
    int i=2;
    if((a & (1 << i)) != 0)
    {
        cout << endl << i << "th bit is set"<< endl;
    }
    else
    {
        cout << endl << i << "th bit is not set"<< endl;
    }
    return 0;
}