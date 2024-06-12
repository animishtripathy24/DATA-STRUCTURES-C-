#include<bits/stdc++.h>
using namespace std;

//recursion
int funct(int n)
{
    if(n<1)
    {
        return 0;
    }
    return n+funct(n-1);
}
int main()
{
    cout << "enter the value of n" << endl;
    int n;
    cin >> n;
    cout << funct(n) << endl;
}