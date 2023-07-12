#include<iostream>
using namespace std;

int binarySearch(int a[],int n,int key)
{
    int start=0;
    int end=n-1;

    while(start<=end)
    {
        int mid=start+(end-start)/2;//to neglect integer overflow.

        if(a[mid]==key)
        {
            return mid;
        }
        else if(key>a[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}

int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int evenIndex=binarySearch(even,6,20);

    cout<<"index of 20 is"<<evenIndex<<endl;

    int oddIndex=binarySearch(odd,5,16);

    cout<<"index of 16 is"<<oddIndex<<endl;

    return 0;


}
