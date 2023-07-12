/*
A B C D E
A B C D
A B C
A B
A
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
        int c=n-i+1;
        char ch=65;
        while(c)
        {
            cout << ch << " ";
            ch++;
            c--;
        }
        i++;
        cout << endl;
    }
}
