#include<bits/stdc++.h>
using namespace std;

void first_part(int n)
{
    int number=(n/2)+1;
    int i=1;
    while(i<=number)
    {
        int spaces=number-i;
        while(spaces)
        {
            cout << " " << " ";
            spaces--;
        }
        int stars=i;
        while(stars)
        {
            cout << "*" << " ";
            stars--;
        }
        int stars2=i-1;
        while(stars2)
        {
            cout << "*" << " ";
            stars2--;
        }
        i++;
        cout << endl;
    }
}
void second_part(int n)
{
    int number=(n/2);
    int i=1;
    while(i<=number)
    {
        int spaces=i;
        while(spaces)
        {
            cout << " " << " ";
            spaces--;
        }
        int stars=number-i+1;
        while(stars)
        {
            cout << "*" << " ";
            stars--;
        }
        int stars2=number-i;
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
    first_part(n);
    second_part(n-1);
}