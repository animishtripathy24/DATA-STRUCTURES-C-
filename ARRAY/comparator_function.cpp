#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first != b.first)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second > b.second;
    }
}
void printfunction(vector<pair<int,int>>&v)
{
    for(auto &value:v)
    {
        cout << value.first << " " << value.second << endl;
    }
}
timepass
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmp);
    for(auto &value:v)
    {
        cout << value.first << " " << value.second << endl;
    }

    string str="Animish Tripathy";
    cout << str.size() << endl;
    str=str.substr(0,str.size()-1);
    cout << str;
}