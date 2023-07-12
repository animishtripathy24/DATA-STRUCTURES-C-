#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&v,int low,int mid,int high)
{
    //initialising a temporary pointer
    vector<int>temp;
    //initialising left and right pointers
    int left=low;
    int right=mid+1;

    while(left <= mid && right<=high)
    {
        if(v[left]<v[right])
        {
            temp.push_back(v[left]);
            left++;
        }
        else
        {
            temp.push_back(v[right]);
            right++;
        }
    }

    //now copying the remaining element
    while(left<=mid)
    {
        temp.push_back(v[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(v[right]);
        right++;
    }

    //now copying the temp vector element into the original vector
    for(int i=low;i<=high;i++)
    {
        v[i]=temp[i-low];
    }
}

void mergeSort(vector<int>&v,int low,int high)
{
    //base case
    if(low>=high)
    {
        return;
    }
    // int mid=low+(high-low)/2;
    int mid=(low+high)/2;
    mergeSort(v,low,mid);
    mergeSort(v,mid+1,high);
    merge(v,low,mid,high);


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

    mergeSort(v,0,v.size()-1);

    cout << "The sorted array is" << endl;
    for(auto &value:v)
    {
        cout << value << " ";
    }
}
