#include<iostream>
using namespace std;

void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}

int findDuplicate(int a[],int n)
{
    int ans =0;
    for(int i=0;i<n;i++)
    {
    for(int j=i+1;j<n;j++)
    {
          if(a[i]==a[j])
          {
              return a[j];
          }
    }
    }
    return 0;

}

int main()
{
    int n,a[30];
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the" <<" "<< i <<" "<<"element";
        cin>>a[i];
    }
    cout<<"the array is:"<<endl;
    printArray(a,n);
    cout<<"the duplicate element in the array is:"<<findDuplicate(a,n)<<endl;

    return 0;


}
