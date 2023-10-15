#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&v,int place=6) // default argument 
{
    for(int i=0;i<place;i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    //provide place < n
    int place;
    cin >> place;
    print(v);
}