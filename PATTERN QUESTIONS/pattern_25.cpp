#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int space=n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int x=1;
        int col=1;
        while(col<=row)
        {
            cout<<x;
            x=x+1;
            col=col+1;
        }
        int start=row-1;
        while(start)
        {
            cout<<start;
            start--;
        }
        cout<<endl;
        row=row+1;

    }
}
