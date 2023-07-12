#include<iostream>
using namespace std;

void printArray(int a[],int x)
{
    for(int i=0;i<x;i++)
    {
        cout<< a[i] <<" ";
    }
    cout<<endl;
}

int findUnique(int a[],int n)
{
    int ans=0;

    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    return ans;
}
int main()
{
    int n,a[30];
    cout<<"enter the size of the array(only odd size)"<<endl;
    cin>>n;
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the array is:"<<endl;
    printArray(a,n);

    cout<<endl;
    cout<<"the unique element in the array is:"<<findUnique(a,n)<<endl;

    return 0;
}

