#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v1={2,3,4,5,6,7,8,9};
    //declaring an iterator
    vector<int>::iterator itt=v1.begin();
    for(itt=v1.begin();itt != v1.end();itt++)
    {
        cout << *(itt) << " ";
    }
    cout << endl << endl;


    //iterators in case of pairs
    vector<pair<int,int>>v={{1,2},{3,4},{5,6},{7,8},{9,10}};
    vector<pair<int,int>>::iterator it=v.begin();
    while(it !=v.end())
    {
        cout << it->first << " " << it->second << endl;
        ++it;
    }
    cout << endl;

    //iterators using auto keyword
    vector<pair<int,int>>p={{2,1},{4,3},{6,5},{8,7},{10,9}};
    for(auto &it:p)
    {
        cout << it.first << " " << it.second << endl;
    }
}