#include<bits/stdc++.h>
using namespace std;

int peakIndex(vector<int>&arr)
{
    int start=0;
    int end=arr.size()-1;

    while(start < end)
    {
        int mid=start+((end-start)>>1);
        if(arr[mid]<=arr[mid+1])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    return start;
}

int main()
{
    int n;
    cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "The Peak Index is found at the index " << peakIndex(v);
}