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
    //if the toogle the 2nd bit then
    //ek aisa number lenge jisme sirf ith bit set ho
    // aur uska original number ke saath xor kara denge
    int i=1;
    printBinary(9 ^ (1 << i));
    return 0;
}