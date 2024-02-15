#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>>&v)
{
    cout << "Size:" << v.size() << endl;
    for(int i=0;i<v.size();i++)
    {
        cout << v.at(i).first << " " << v.at(i).second << endl;
    }
}
int main()
{
    //declaration
    vector<pair<int,int>>v;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    printVec(v);
}