#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    int i=1;
    char ch=65;//typecasting
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        ch=ch+1;
        i=i+1;
    }
}
