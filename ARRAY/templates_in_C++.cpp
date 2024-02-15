#include<bits/stdc++.h>
using namespace std;
template<typename T>

T getMax(T n1,T n2)
{
    return (n1>n2) ? n1 : n2;
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << "The maximum number is :"<< getMax<int>(a,b);
    //now if we have to find the max of two characters
    char c1,c2;
    cin>>c1>>c2;
    cout<<static_cast<char>(getMax<char>(c1,c2)) << endl;
    return 0;
}