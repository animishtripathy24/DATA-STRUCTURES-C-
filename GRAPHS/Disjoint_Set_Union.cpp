#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

int parent[N];
int size[N];

void make(int v)
{
    parent[v]=v;
    size[v]=1;
}

int find(int v)
{
    if(v==parent[v])
    {
        return v;
    }
    //path compression
    return parent[v]=find(parent[v]);
}

void Union(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a!=b)
    {
        if(size[a]< size[b])
        {
            swap(a,b);
        }
        parent[b]=a;
        size[a]+=size[b]; //kyunki ab b bhi add ho gya toh uska size bhi add karna padega

    }
}

int main()
{
    int nodes,edges;
    cin >> nodes >> edges;
    for(int i=1;i<=nodes;i++)
    {
        make(i);
    }
    while(edges--)
    {
        int u,v;
        cin >> u >> v;
        Union(u,v);
    }
    int connected_component=0;
    for(int i=1;i<=nodes;++i)
    {
        //jitne ke liye parent khud ke barabar hai...utne components hai
        if(find(i)==i)
        {
            connected_component++;
        }
    }

    cout << "The number of connected component is " << connected_component << endl;
}