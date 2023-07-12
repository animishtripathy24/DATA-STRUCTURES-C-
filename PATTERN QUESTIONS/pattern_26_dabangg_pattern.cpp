#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int x=1;
        int loop=n-i+1;
        while(loop)
        {
            cout<<x << " ";
            x=x+1;
            loop--;

        }
        int stars=i-1;
        while(stars)
        {
            cout<<"*" << " ";
            stars--;
        }
        // int j=2;
        // while(j<=i)
        // {
        //     cout<<"*";
        //     j=j+1;
        // }
        int stars2=i-1;
        while(stars2)
        {
            cout << "*" << " ";
            stars2--;
        }
        int start=n-i+1;
        while(start)
        {
            cout<<start << " ";
            start--;
        }

        cout<<endl;
        i=i+1;

    }
}
