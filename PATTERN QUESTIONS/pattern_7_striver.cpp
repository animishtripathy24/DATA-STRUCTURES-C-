/*
              *
            * * *
          * * * * *
        * * * * * * *
      * * * * * * * * *
    * * * * * * * * * * *
  * * * * * * * * * * * * *
* * * * * * * * * * * * * * *
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=1;
    while(i<=n)
    {
        //printing spaces
        int spaces=n-i;
        while(spaces)
        {
            cout << " " << " ";
            spaces--;
        }
        int j=1;
        while(j<=i)
        {
            cout << "*" << " ";
            j++;
        }
        int stars=i-1;
        while(stars)
        {
            cout << "*" << " ";
            stars--;
        }
        i++;
        cout << endl;
    }
}

