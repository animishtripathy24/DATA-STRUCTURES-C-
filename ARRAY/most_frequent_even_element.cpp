/*Given an integer array nums, return the most frequent even element.
If there is a tie, return the smallest one. If there is no such element, return -1.*/

/*Example 1:

Input: nums = [0,1,2,2,4,4,1]
Output: 2
Explanation:The even elements are 0, 2, and 4. Of these, 2 and 4 appear the most.
We return the smallest one, which is 2.*/

/*
Example 2:

Input: nums = [29,47,21,41,13,37,25,7]
Output: -1
Explanation: There is no even element.
*/

#include<bits/stdc++.h>
using namespace std;
int mostFrequentEven(vector<int>& nums) 
{
    //declaring map to count the frequency 
    map<int,int>m;
    vector<int>v;
    for(int i=0;i<nums.size();i++)
    {
        m[nums[i]]++;
    }
    // cout << endl;
    // for(auto &value:m)
    // {
    //     cout << value.first << " " << value.second << endl;
    // }
    for(auto &value:m)
    {
        if((value.first%2)==0)
        {
            v.push_back(value.second);
        }
    }
    // for(auto &value:v)
    // {
    //     cout <<  value << " "; 
    // }cout << endl << endl;
    auto it=max_element(v.begin(),v.end());
    // cout << *(it) << endl;
    for(auto &ch:m)
    {
        if( (ch.first%2==0 )&&(*it==ch.second))
        {
            return ch.first;
        }
    }
    return -1;
}

int main()
{
    int n;
    std::cin >> n;
    vector<int>nums(n);
    for(auto &value:nums)
    {
        std::cin >> value;
    }
    std::cout << endl << mostFrequentEven(nums) << endl;

    return 0;
}