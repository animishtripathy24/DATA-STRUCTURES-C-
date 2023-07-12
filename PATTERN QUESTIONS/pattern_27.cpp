#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space--;
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
