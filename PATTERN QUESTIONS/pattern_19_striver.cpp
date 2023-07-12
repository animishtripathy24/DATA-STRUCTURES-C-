/*
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
*/
#include<iostream>
using namespace std;
void print_first_part(int n)
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
        int spaces=i-1;
        while(spaces)
        {
            cout << " " << " ";
            spaces--;
        }
        int spaces2=i-1;
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
void print_second_part(int n)
{
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout << "*" << " ";
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
            cout << "*" << " ";
            number--;

        }
        i++;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print_first_part(n);
    print_second_part(n);
    return 0;

}
