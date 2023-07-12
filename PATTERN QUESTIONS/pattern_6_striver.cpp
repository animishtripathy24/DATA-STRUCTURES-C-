/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
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
        int numbers=n-i+1;
        while(numbers)
        {
            cout<< x << " ";
            x++;
            numbers--;
        }
        i++;
        cout << endl;
    }
}
