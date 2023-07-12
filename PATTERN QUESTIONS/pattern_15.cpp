#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    char ch=65;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<ch<<"  ";
            j=j+1;
        }
        cout<<endl;
        ch=ch+1;
        i=i+1;
    }

}
