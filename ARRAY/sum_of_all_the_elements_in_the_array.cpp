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

int sum_array(int a[],int x)
{
    int sum=0;

    for(int i=0;i<x ;i++)
    {
        sum=sum+a[i];
    }
    return sum;
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
    cout<<"the sum of all the elements of the array is:"<<" "<<sum_array(a,n)<<endl;

     return 0;

}
