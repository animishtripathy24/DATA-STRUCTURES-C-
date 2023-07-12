#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        //printing spaces....
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        //printing stars....
        int stars=n-i+1;
        while(stars)
        {
            cout<<"*";
            stars--;
        }
        cout<<endl;
        i=i+1;
    }
}
