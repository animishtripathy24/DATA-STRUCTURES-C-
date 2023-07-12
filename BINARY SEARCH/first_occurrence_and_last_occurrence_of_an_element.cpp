#include<bits/stdc++.h>
using namespace std;

int firstOccu(vector<int>&nums,int target)
    {
        int index=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(index<nums.size() && nums[index]==target)
        {
            return index;
        }
        return -1;
    }
    int lastOccu(vector<int>&nums,int target)
    {
        int index1=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        index1--;
        if(index1>=0 && nums[index1]==target)
        {
            return index1;
        }
        return -1;
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
    cout << "Enter the target element" << endl;
    int target;
    cin >> target;
    int first=firstOccu(v,target);
    int last=lastOccu(v,target);

    cout << "The first occurrence " << target << " is at index " << first << endl;
    cout << "The last occurrence " << target << " is at index " << last << endl;
}