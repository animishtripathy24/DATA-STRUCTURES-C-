#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
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

    selectionSort(arr,n);

    cout << "The sorted array after selection sort is" << endl;

    for(int value=0;value<n;value++)
    {
        cout << arr[value] << " ";
    }
}