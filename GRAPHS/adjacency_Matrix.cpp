#include<iostream>
using namespace std;

int main()
{
    //in the first line we are given n and m
    //n=no.of nodes and m=no.of edges
    int n,m;
    cin >> n >> m;
    //graph here 
    int adj[n+1][n+1];
    //then we are given m lines representing the edges
    for(int i = 0 ;i < m ;++i) 
    {
        int u,v;
        cin >> u >> v;
        adj[u][v]=1;
        adj[v][u]=1;
    }

    return 0;
}