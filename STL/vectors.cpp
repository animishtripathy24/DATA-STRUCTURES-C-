#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<bool>&v)
{
    cout << "Size of the vector:" << v.size() << endl;
    for(int i=0;i<v.size();i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    //declaring a vector

    // vector<int>v;
    // int n;
    // cin >> n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin >> x;
    //     printVec(v);
    //     v.push_back(x);
    // }


    // cout << "The elements of the vector are :" << endl;
    // for(auto &value:v)
    // {
    //     cout << value << " ";
    // }cout << endl;

    //printing the vector


    //declaring a vector of a particular size
    vector<bool>v(10,false);
    printVec(v);
    //it initialzes all the values with 10 size and all the value as 0;
    
}