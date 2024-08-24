#include<bits/stdc++.h>
using namespace std;

int findGCD(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    if(b == 0)
    {
        return a;
    }
    while(a != b)
    {
        if( a > b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }

    return a;
}

int main()
{
    cout << "Enter the two numbers " << endl;
    int a , b;
    cin >> a >> b;

    cout << "The GCD of two numbers are : " << findGCD(a,b) << endl;
}