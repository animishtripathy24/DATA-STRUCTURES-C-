#include<iostream>
using namespace std;


void bubble_sort(int a[],int n)
{
    for(int i=1;i<n;i++)//number of passes
    {
        bool swapped=false;
        for(int j=0;j<n-i;j++)//index
        {
            if(a[j]>a[j+1])
            {
                //swapping
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=true;
            }
        }
        if(swapped ==  false)
        {
            //already sorted
            break;
        }
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
    cout<<"the array before sorting is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    bubble_sort(a,n);

    cout<<endl<<"the array after sorting is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;



}
