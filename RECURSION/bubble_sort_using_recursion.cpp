#include<iostream>
using namespace std;

void bubble_sort(int *arr,int n)
{
    cout << endl << endl <<  "Call received for " << "  ";
    for(int i=0;i<n;i++)
    {
        cout << *(arr+i) << " ";
    }
    if(n==0 || n==1)
    {
        return;
    }
    //ek case solve kar lenge baaki ka case recursion sambhal lega ...
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    //recursion call
    bubble_sort(arr,n-1);
}

int main()
{
    int n;
    cin >> n;

    int *arr=new int[n];

    //populating the array
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr,n);

    //printing the array

    cout << endl << "The sorted array is " << endl; 
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    } 


}