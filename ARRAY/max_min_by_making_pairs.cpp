#include<iostream>
using namespace std;

struct pairs
{
    int max;
    int min;

};

struct pairs getMinMax(int a[],int n)
{
    struct pairs minmax;
    int i;

    //for arrays containing the even number of elements
    //here we initialize the first two elements as max and min
    if(n%2==0)
    {
        if( a[0] > a[1] )
        {
            minmax.max = a[0];
            minmax.min = a[1];
        }
        else
        {
            minmax.max = a[1];
            minmax.min = a[0];
        }
        i=2;
    }
    else//that is in case of array containing  odd number of elements
    {
        minmax.max = a[0];
        minmax.min = a[0];
        i=1;
    }

  while (i < n-1)
  {
    if (a[i] > a[i+1])
    {
      if(a[i] > minmax.max)
        minmax.max = a[i];
      if(a[i+1] < minmax.min)
        minmax.min = a[i+1];
    }
    else
    {
      if (a[i+1] > minmax.max)
        minmax.max = a[i+1];
      if (a[i] < minmax.min)
        minmax.min = a[i];
    }
    i += 2;

  }
  return minmax;
}

int main()
{
    int n,a[100];
    cout <<"enter the size of the array " << endl;
    cin >> n;
    cout << "enter the elements in the array " << endl;
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    struct pairs minmax = getMinMax(a,n);
    cout<<"the maximum elements of the array is: "<< minmax.max << endl;
    cout<<"the minimum elements of the array is: "<< minmax.min << endl;
    
    
    return 0;
}
