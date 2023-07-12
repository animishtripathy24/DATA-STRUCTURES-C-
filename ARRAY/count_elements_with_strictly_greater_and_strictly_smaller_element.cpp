/*
Given an integer array nums, return the number of elements that have both a strictly smaller 
and a strictly greater element appear in nums.

Example 1:

Input: nums = [11,7,2,15]
Output: 2
Explanation: The element 7 has the element 2 strictly smaller than it and the element 11 
strictly greater than it.
Element 11 has element 7 strictly smaller than it and element 15 strictly greater than it.
In total there are 2 elements having both a strictly smaller and a strictly greater element 
appear in nums.


Example 2:

Input: nums = [-3,3,3,90]
Output: 2
Explanation: The element 3 has the element -3 strictly smaller than it and the element 90 
strictly greater than it.
Since there are two elements with the value 3, in total there are 2 elements having both a 
strictly smaller and a strictly greater element appear in nums.
*/


#include<bits/stdc++.h>
using namespace std;
    int countElements(vector<int>& nums) {
        int max_count=0;
        for(int i=0;i<nums.size();i++)
        {
            int up_count=0;
            int lo_count=0;
            for(int j=0;j<nums.size();j++)
            {
                if( i!=j && nums[j]>nums[i])
                {
                    if(up_count==1)
                    {
                        continue;
                    }
                    up_count++;
                }
                else if(i!=j && nums[j]<nums[i])
                {
                    if(lo_count == 1)
                    {
                        continue;
                    }
                    lo_count++;
                }
            }
            if(lo_count==1 && up_count==1)
            {
                max_count++;
            }
        }
        return max_count;
        
    }

int main()
{
    int n;
    cin >> n;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << countElements(nums) << endl;

}