#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int stars=n-i+1;
        while(stars)
        {
            cout<<"*";
            stars=stars-1;
        }
        cout<<endl;
        i=i+1;
    }
}
