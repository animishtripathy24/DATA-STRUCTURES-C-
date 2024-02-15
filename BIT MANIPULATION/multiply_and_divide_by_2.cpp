#include<bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    for(int i=10;i>=0;i--)
    {
        cout << ((num >> i) & 1); 
    }
    cout << endl;
}
int main()
{
    int num=5;
    //divide by 2(integer division)
    cout << (num >> 1) << endl;
    //multiply by 2(bitwise shift left)
    cout << (num << 1) << endl;
}