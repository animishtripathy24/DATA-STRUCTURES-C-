#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
vector<pair<int,int>>adj[N];
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int u,v,wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});

    }
}

