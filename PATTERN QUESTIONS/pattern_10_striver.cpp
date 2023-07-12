/*
          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
* * * * * * * * * * *
* * * * * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
*/
#include<iostream>
using namespace std;
void print7(int n)
{
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
void print8(int n)
{
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

int main()
{
    int n;
    cin >> n;
    print7(n);
    print8(n);
    return 0;
}
