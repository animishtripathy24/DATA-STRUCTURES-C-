#include<bits/stdc++.h>
using namespace std;

//Recursive function
void func(long long int n,long long int sum)
{
    cout << n << "  ";
    //base case
    if(n<1)
    {
        cout << sum << endl;
        return;
    }
    //recursive call
    func(n-1,sum+n);
}
int main()
{
    cout << "Enter the value of n " << endl;
    long long int n;
    cin >> n;
    func(n,0);
}