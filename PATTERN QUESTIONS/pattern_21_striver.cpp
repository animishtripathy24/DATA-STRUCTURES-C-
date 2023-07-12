/*
* * * * *
*       *
*       *
*       *
* * * * *
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
        int j=1;
        while(j<=n)
        {
            if(i==1 || i==n)
            {
                cout << "*" << " ";
                j+=1;
            }
            else
            {
                if(j==1 || j==n)
                {
                    cout << "*" << " ";
                    j++;
                }
                else
                {
                    cout << " " << " ";
                    j++;
                }
            }

        }
        i++;
        cout << endl;
    }

}
