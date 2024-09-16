#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        ans.push_back(x);  
    }
    int smallest = ans[0];
    int ssL = -1;
    for(int i=1;i<ans.size();i++)
    {
        if(ans[i] < smallest)
        {
            ssL = smallest;
            smallest = ans[i];
        }
        else if(ans[i] < ssL && ans[i] > smallest)
        {
            ssL = ans[i];
        }
    }
    cout << "The minimum element from the array is " << smallest << endl;
    cout << "The Second minimum from the array is " << ssL << endl;
}