#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;
    vector<int>v;
    for(int i=0 ; i<n ; i++)
    {
        int x;
        std::cin >> x;
        v.push_back(x);
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum = 0;
            for(int k=i;k<j;k++)
            {
                sum+=v[k];
            }
            maxi=max(sum,maxi);
        }
    }
    std::cout << maxi << endl;


}