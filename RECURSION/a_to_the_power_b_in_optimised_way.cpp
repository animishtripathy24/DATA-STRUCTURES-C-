#include<iostream>
using namespace std;

int power(int a,int b)
{
    //base case
    if(b==0)
    {
        return 1;
    }
    else if(b==1)
    {
        return a;
    }

    int ans = power(a,b/2);
    if(b&1) // b is odd
    {
        return a*ans*ans;
    }
    else //b is even
    {
        return ans*ans;
    }
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout << power(a,b) << endl;
}