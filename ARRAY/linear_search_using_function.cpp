#include<iostream>
using namespace std;

void input_element(int a[],int x)
{
    for(int i=0;i<x;i++)
    {
        cout<<"enter the " << i+1 << " element";
        cin>> a[i];
    }
}

bool lin_search(int a[],int x,int key)
{
    for(int i=0;i<x;i++)
    {
        if(a[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int key,a[40],n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<endl;
    cout<<"enter the elements in the array"<<endl;
    input_element(a,n);
    cout<<endl;
    cout<<"enter the key to be searched"<<endl;
    cin>>key;
    bool found=lin_search(a,n,key);

    if(found)
    {
        cout<<"the key is found"<<endl;
    }
    else
    {
       cout<<"the key is not found"<<endl;
    }

    return 0;


}
