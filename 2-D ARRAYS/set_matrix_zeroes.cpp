/*
Given a binary matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> set_zero(vector<vector<int>>matrix,int n,int m)
{
    int cols=1;

    //firstly check for zeroes in the array and mark the first row and first column as zero
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                //mark the ith row as zero
                matrix[i][0]=0;
                if(j!=0)
                {
                    matrix[0][j]=0;
                }
                else
                {
                    cols=0;
                }
            }
        }
    }

    //mark the ones to zeroes without touching the hashed part i.e. the first row and first column
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(matrix[i][j]!=0)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }

    //now for the first row we have to check whether the matrix[0][0]==0
    if(matrix[0][0]==0)
    {
        for(int j=0;j<m;j++)
        {
            matrix[0][j]=0;
        }
    }
    return matrix;

    //for the first column we have to check whether cols is zero or not
    if(cols==0)
    {
        for(int i=0;i<n;i++)
        {
            matrix[i][0]=0;
        }
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

    vector<vector<int>>ans=set_zero(v,n,m);
    cout << endl << "The final matrix is:" << endl;

    for(auto &value:ans)
    {
        for(auto &it:value)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}