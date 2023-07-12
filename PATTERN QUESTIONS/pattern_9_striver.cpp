/*
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
* * * * * * * * *
* * * * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=1;
    int rows=(2*n-1);
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout << "*" << " ";
            j++;
        }

        i++;
        cout << endl;
    }
    int left=n-1;
    while(left<=rows)
    {
        int stars=rows-left+1;
        while(stars)
        {
            cout << "*" << " ";
            stars--;
        }
        left++;
        cout << endl;
    }
    return 0;

}
