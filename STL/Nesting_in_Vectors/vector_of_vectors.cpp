#include<bits/stdc++.h>
using namespace std;

void printVec(vector<vector<pair<int,int>>>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout << "Size :" << v.size() << endl;
        for(int j=0;j<v[i].size();j++)
        {
            cout << v[i][j].first << " " << v[i][j].second << endl;
        }
    }
    cout << endl;
}

int main()
{
    vector<vector<pair<int,int>>>v;
    int N;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        int n;
        cin >> n;
        vector<pair<int,int>>temp;
        for(int j=0;j<n;j++)
        {
            int x,y;
            cin >> x >> y;
            temp.push_back({x,y});
        }
        v.push_back(temp);

    }
    printVec(v);
}
