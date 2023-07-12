#include<iostream>
using namespace std;

int main()
{
    int a[30],n,*p;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the " << i+1 << " element";
        cin>> a[i];
    }

    cout<<endl;
    cout<<"the array elements are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<< a[i] <<" ";
    }
    cout<<endl;

    //reversing an array
    cout<<endl;
    cout<<"the reversed array is"<<endl;

    for(p=&a[n-1];p>=&a[0];p--)
    {
        cout<<*p<<" ";
    }
    return 0;
}
