#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    int x=1;
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
        int loop=n-i+1;
        while(loop)
        {
            cout<<x;
            loop--;
        }
        cout<<endl;
        x=x+1;
        i=i+1;
    }
}
