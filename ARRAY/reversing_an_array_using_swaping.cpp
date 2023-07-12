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

void reverse(int a[],int x)
{
    int start=0;
    int end=x-1;

    while(start<=end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
}

int main()
{
    int a[40],n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    cout<<"the array is:"<<endl;
    printArray(a,n);
    reverse(a,n);
    cout<<"the array after reversing is:"<<endl;
    printArray(a,n);

    return 0;
}
