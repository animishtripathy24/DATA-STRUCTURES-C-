#include<bits/stdc++.h>
using namespace std;

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
    printBinary(5);
    printBinary(20);
    printBinary(50);
    printBinary(267);
}