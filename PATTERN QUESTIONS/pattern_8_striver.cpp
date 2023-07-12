/*
* * * * * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
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
        int spaces=i-1;
        while(spaces)
        {
            cout << " " << " ";
            spaces--;
        }
        //printing stars..
        int stars=n-i+1;
        while(stars)
        {
            cout << "*" << " ";
            stars--;
        }
        int stars2=n-i;
        while(stars2)
        {

            cout << "*" << " ";
            stars2--;
        }
        i++;
        cout << endl;
    }
}
