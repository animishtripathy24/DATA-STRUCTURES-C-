#include<iostream>
using namespace std;


int getSum(int *arr,int n)
{
    //base case
    if(n==1)
    {
        return arr[0];
    }

    //recurrence relation
    return arr[0]+getSum(arr+1,n-1);
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

    cout << getSum(arr,n) << endl;
    delete[] arr; //for deallocating the memory
}