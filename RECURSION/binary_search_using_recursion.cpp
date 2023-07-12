#include<iostream>
using namespace std;


bool binary_search(int *arr,int s,int e,int key)
{
    int mid=s+((e-s)>>1);

    //base case
    //element not found
    if(s>e)
    {
        return 0;
    }

    //element found
    if(arr[mid]==key)
    {
        return 1;
    }

    if(key>arr[mid])
    {
        return binary_search(arr,mid+1,e,key);
    }
    else{
        return binary_search(arr,s,mid-1,key);
    }

}

int main()
{
    int n;
    cin >> n;
    int *arr=new int[n];

    //taking input into the array...
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int s=0;
    int e=n-1;

    cout << "Enter the key to be serached" << endl;
    int key;
    cin >> key;

    cout << binary_search(arr,s,e,key);
}