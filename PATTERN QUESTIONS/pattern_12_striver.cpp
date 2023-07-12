/*
1                     1
1 2                 2 1
1 2 3             3 2 1
1 2 3 4         4 3 2 1
1 2 3 4 5     5 4 3 2 1
1 2 3 4 5 6 6 5 4 3 2 1
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
        int x=1;
        int j=1;
        while(j<=i)
        {
            cout << x << " ";
            x++;
            j++;
        }
        int spaces=n-i;
        while(spaces)
        {
            cout << " " << " ";
            spaces--;
        }
        int spaces2=n-i;
        while(spaces2)
        {
            cout << " " << " ";
            spaces2--;
        }
        int number=i;
        while(number)
        {
            cout << number << " ";
            number--;

        }
        i++;
        cout << endl;
    }
}
