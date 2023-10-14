#include<bits/stdc++.h>
using namespace std;

//pivot finding function
int findPivot(int *arr,int n)
{
    int start=0;
    int end=n-1;

    while(start < end)
    {
        int mid=(start+((end-start)>>1));
        if(arr[mid]>=arr[0])
        {
            //it means that it lies on the first line
            start=mid+1;
        }
        else
        {
            //it means that it lies on the second line
            end=mid;
        }

    }
    //now we can return either start or end as both are pointing to the same answer
    return start;
}

int main()
{
    int n;
    cin >> n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int index=findPivot(arr,n);
    cout << "The index of the pivot element is :" << index << endl;
    cout << "and the element present at that index is " << arr[index] << endl;
}