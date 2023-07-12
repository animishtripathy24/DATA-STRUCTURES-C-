#include<iostream>
using namespace std;
 main()
{
    int n,a[100],i,key,position,flag;
    cin>>key;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            flag=1;
            break;
            position=i;
        }
    }
    if(flag)
    {
        cout<<"the key is found at position "<<i<<endl;
    }
    else
    {
        cout<<"the key is not found in the given list"<<endl;
    }


}
