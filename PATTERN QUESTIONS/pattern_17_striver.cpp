/*
      A
    A B A
  A B C B A
A B C D C B A
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
        char co='A'+i-2;
        char ch=65;
        int spaces=n-i;
        while(spaces)
        {
            cout << " " << " ";
            spaces--;
        }
        int c=i;
        while(c)
        {
            cout << ch << " ";
            ch++;
            c--;
        }
        int ci=i-1;
        while(ci)
        {
            ci--;
            cout << co << " ";
            co-=1;

        }
        i++;
        cout << endl;

    }
}
