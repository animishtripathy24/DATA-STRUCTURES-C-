#include<bits/stdc++.h>
using namespace std;

vector<int> spiral_matrix(vector<vector<int>>v,int n,int m)
{
    vector<int>ans;
    int left=0;
    int top=0;
    int right=m-1;
    int bottom=n-1;

    int count=0;
    int total=n*m;

    while(count<total)
    {

        //first row starting from left to right and top is constant
        for(int i=left;count<total && i<=right;i++)
        {
            ans.push_back(v[top][i]);
            count++;
        }
        top++;

        //last column starting from top to bottom constant is right
        for(int i=top;count<total && i<=bottom;i++)
        {
            ans.push_back(v[i][right]);
            count++;
        }
        right--;

        //last row starting from right to left and bottom is constant
        for(int i=right;count<total && i>=left;i--)
        {
            ans.push_back(v[bottom][i]);
            count++;
        }
        bottom--;

        //first column starting from bottom to top and constant is left

        for(int i=bottom;i>=top;i--)
        {
            ans.push_back(v[i][left]);
            count++;
        }
        left++;
    }

    return ans;
}

int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>>v;

    for(int i=0;i<n;i++)
    {
        vector<int>temp;
        for(int j=0;j<m;j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    vector<int>ans=spiral_matrix(v,n,m);
    cout << endl << "The final matrix is:" << endl;

    for(auto &value:ans)
    {
        cout << value << " ";
    }cout << endl;
}