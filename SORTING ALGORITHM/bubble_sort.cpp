#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int n;
    std::cin >> n;

    int *arr=new int[n];
    //taking inputs into the array
    for(int i=0;i<n;i++)
    {
        std::cin >> arr[i];
    }

    bubbleSort(arr,n);

    cout << "The sorted array after bubble sort is" << endl;

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}