#include<iostream>
using namespace std;

void input_element(int a[],int x)
{
    for(int i=0;i<x;i++)
    {
        cout<<"enter the " << i+1 << " element";
        cin>> a[i];
    }
}

void printArray(int a[],int x)
{
    cout<<endl;
    cout<<"the array elements are:"<<endl;
    for(int i=0;i<x;i++)
    {
        cout<< a[i] <<" ";
    }
    cout<<endl;
}

int getMax(int a[],int x)
{
    int max=INT_MIN;

    for(int i=0;i<x;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}

int getMin(int a[],int x)
{
    int min=INT_MAX;

    for(int i=0;i<x;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}

int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;

    int a[50];
    input_element(a,n);
    printArray(a,n);
    cout<<endl;

    cout<<"the maximum value in the array is "<<getMax(a,n)<<endl;
    cout<<"the minimum value in the array is "<<getMin(a,n)<<endl;





}
