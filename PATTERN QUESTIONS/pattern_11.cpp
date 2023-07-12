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
        char ch=65;//typecasting
        int j=1;
        while(j<=n)
        {
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
