#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=9;
    int count=0;
    for(int i=31;i>=0;i--)
    {
        if((num & (1 << i)))
        {
            count++;
        }
    }
    cout << "The number of set bits in the number is " << count << endl;

    //we can also the inbuilt function 
    cout << __builtin_popcount(num) << endl;
}