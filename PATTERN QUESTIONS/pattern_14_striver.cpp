/*
A
A B
A B C
A B C D
A B C D E
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
        char ch=65;
        int j=1;
        while(j<=i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        i++;
        cout << endl;
    }
}
