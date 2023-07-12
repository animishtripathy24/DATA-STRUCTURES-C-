#include<iostream>
using namespace std;

void selectionSort(int a[],int n)
{
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minIndex])
            {
                minIndex=j;
            }
        }
    temp=a[i];
    a[i]=a[minIndex];
    a[minIndex]=temp;

    }


}

int main()
{
    int a[30],n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the array before sorting is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    selectionSort(a,n);
    cout<<endl;
    cout<<"the array after sorting is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;



}
