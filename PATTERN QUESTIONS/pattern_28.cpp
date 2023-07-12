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
        int x=11;
        int col=1;
        while(col<=row)
        {
            cout<<x;
            x=x-1;
            col=col+1;
        }
        int start=row-1;
        while(start)
        {
            int c=n-row+9;
            cout<<c;
            c++;
            start--;
        }

        cout<<endl;
        row=row+1;

    }
}
