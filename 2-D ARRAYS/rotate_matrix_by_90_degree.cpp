#include<bits/stdc++.h>
using namespace std;

void rotate_matrix(vector<vector<int>>&v,int n,int m)
{

    //first find the transpose of the matrix

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }

    //now reverse each rows..

    for(int i=0;i<n;i++)
    {
        reverse(v[i].begin(),v[i].end());
    }
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

    rotate_matrix(v,n,m);
    cout << endl << "The rotated matrix is:" << endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}