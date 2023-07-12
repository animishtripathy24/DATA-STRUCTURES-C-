/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
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
        i++;
        cout << endl;
    }
    return 0;
}
