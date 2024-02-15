#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string>m;
    cout << "Enter the size of the map" << endl;
    int n;
    cin >> n;
    for(int i = 0 ;i < n ;i++)
    {
        int x;
        string y;
        cin >> x >> y;
        m.insert(make_pair(x,y));
    }
    cout << "The Map is : \n";
    for(auto &value:m)
    {
        cout << value.first << value.second << endl;
    }
}
