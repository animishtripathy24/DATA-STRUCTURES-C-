#include<iostream>
using namespace std;

void printArray(int a[],int x)
{
    for(int i=0;i<x;i++)
    {
        cout<< a[i] <<" ";
    }
    cout<<endl;
}

int  findDuplicate(int a[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    for(int i=1;i<n;i++)
    {
        ans=ans^i;
    }
    return ans;
}

int main()
{
  int n,a[30];
  cin>>n;
  cout<<"enter the elements in the array"<<endl;//enter all unique except one duplicate
  for(int i=0;i<n;i++)
  {
      cin>>a[i];

  }
  cout<<"the array is:"<<endl;
  printArray(a,n);
  cout<<"the duplicate element in the array is:"<<findDuplicate(a,n)<<endl;

  return 0;


}
