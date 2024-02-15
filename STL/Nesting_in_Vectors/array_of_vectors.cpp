#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void printVec(vector<pair<int,int>>&v)
{
    cout << "Size : " << v.size() << endl;
    for(int i=0;i<v.size();i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}



int main()
{
    int N;//kitne vectors banane hai.
    cin >> N;
    vector<pair<int,int>>v[N];
    for(int i=0;i<N;i++)
    {
        //ab ek vector ka size input lena hai.
        int n;
        cin >> n;
        for(int j=0;j<n;j++)
        {
            //har ek me pair input lena hai...
            int x,y;
            cin >> x >> y;
            v[i].push_back({x,y});
        }
    }

    for(int i=0;i<N;i++)
    {
        printVec(v[i]);
    }



    return 0;
}