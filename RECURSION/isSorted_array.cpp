#include<iostream>
using namespace std;

bool isSorted(int *arr,int n)
{
    //agar array ka size 0 ya 1 hai...toh wo alraeady sorted hai.....
    if(n==0 || n==1)
    {
        return 1;
    }

    //ek case solve kar lete hai...first and second element ko comapare kara lete hai..
    if(arr[0]>arr[1])
    {
        return 0;
    }

    //baaki ka recursion sambhal lega .....
    return isSorted(arr+1,n-1);
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

    cout << isSorted(arr,n) << endl;
    delete[] arr;
}