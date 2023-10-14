#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr,int start,int end,int key)
{
    while(start <= end)
    {
        int mid=(start+((end-start)>>1));
        if(key==arr[mid])
        {
            return mid;
        }
        else if(key < arr[mid])
        {
            end=mid-1;
        }
        else 
        {
            start=mid+1;
        }
    }
    return -1;
}

int getPivot(int *arr,int n)
{
    int start=0;
    int end=n-1;

    while(start < end)
    {
        int mid=(start+((end-start)>>1));       
        if(arr[mid]>=arr[0])
        {
            //it means the mid lies on the first line
            start=mid+1;
        }
        else
        {
            //it means in the second line
            end=mid;
        }
    }
    return start;
}

int main()
{
    int n;
    cin >> n;
    //declaring a array
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int pivot=getPivot(arr,n);
    cout << "Enter the target too be searched" << endl;
    int target;
    cin >> target;
    if(target >=arr[pivot] && target <= arr[n-1])
    {
        //then the binary search too be applied on the second line
        int index=binarySearch(arr,pivot,n-1,target);
        cout << "The index of the searched element is:" << endl;
        cout << index << endl;
        goto loop;
    }
    else
    {
        //B.S must be applied on the first line
        int index= binarySearch(arr,0,pivot-1,target);
        cout << "The index of the searched element is:" << endl;
        cout << index << endl;
        goto loop;
    }

    loop:return 0;
}