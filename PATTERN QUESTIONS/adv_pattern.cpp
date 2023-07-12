/*
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=1;
    int x=1;
    int x2=0;
    while(i<=n)
    {
        int spaces=n-i;
        while(spaces)
        {
            cout << " " << " ";
            spaces--;
        }
       int j=1;
       int number=x;
       while(j<=i)
       {
           cout << number << " ";
           number++;
           j++;
       }
       int x1=i-1;
       int number2=x2;
       while(x1)
       {
           cout << number2 << " ";
           number2--;
           x1--;
       }
       x2+=2;

       i++;
       x++;
       cout << endl;
    }
}
