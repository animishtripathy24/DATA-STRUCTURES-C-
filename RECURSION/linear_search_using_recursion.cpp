#include<iostream>
using namespace std;

bool linear_search(int *arr,int n,int key)
{
    if(n==0)
    {
        return 0;
    }
    if(key==arr[0])
    {
        return 1;
    }

    return linear_search(arr+1,n-1,key);
}

int main()
{
    int n;
    cin >> n;
    int *arr=new int[n];

    //taking input to the array
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the key element to be searched" << endl;
    int key;
    cin >> key;

    bool check=linear_search(arr,n,key);
    if(check)
    {
        cout << "The element is present in the array" << endl;
    }
    else{
        cout << "The element is not present in the array" << endl;
    }
}