/*
        A
      A B C
    A B C D E
  A B C D E F G
A B C D E F G H I
  A B C D E F G
    A B C D E
      A B C
        A
*/

#include<iostream>
using namespace std;
void upper_part(int n)
{
    int i=1;
    while(i<=n)
    {
        char ch=65;
        int spaces=n-i;
        while(spaces)
        {
            cout << " " << " ";
            spaces--;
        }
        int j=1;
        while(j<=i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        char ch1='A'+i;
        int rows=i-1;
        while(rows)
        {
            cout << ch1 << " ";
            ch1++;
            rows--;
        }
        i++;
        cout << endl;


    }
}
void lower_part(int n)
{
    int i=1;
    while(i<=n)
    {
        char ch=65;
        int spaces=i;
        while(spaces)
        {
            cout << " " << " ";
            spaces--;
        }
        int rows=n-i+1;
        while(rows)
        {
            cout << ch << " ";
            ch++;
            rows--;
        }
        char ch1='A'+n-i+1;
        int rows2=n-i;
        while(rows2)
        {
            cout << ch1 << " ";
            ch1++;
            rows2--;
        }
        i++;
        cout << endl;



    }
}

int main()
{
    int n;
    cin >> n;
    upper_part(n);
    lower_part(n-1);


    return 0;
}
