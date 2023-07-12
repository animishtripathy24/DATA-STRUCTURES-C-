/*
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 *
*/
#include<iostream>
using namespace std;

void upper_part(int n)
{
    int i=1;
    while(i<=n)
    {
        int stars=i;
        while(stars)
        {
            cout << "*" << " ";
            stars--;
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
        int stars2=i;
        while(stars2)
        {
            cout << "*" << " ";
            stars2--;
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
        int stars=n-i+1;
        while(stars)
        {
            cout << "*" << " ";
            stars--;
        }
        int spaces=i;
        while(spaces)
        {
            cout << " " << " ";
            spaces--;
        }
        int spaces2=i;
        while(spaces2)
        {
            cout << " " << " ";
            spaces2--;
        }
        int stars2=n-i+1;
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
    upper_part(n);
    lower_part(n-1);
    return 0;
}
