/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int rows=(2*n-1);
    int i=0;
    while(i<rows)
    {
        int j=0;
        while(j<rows)
        {
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int down=(2*n-2)-i;
            cout << (n-min(min(top,down),min(left,right))) << " ";
            j++;
        }
        i++;
        cout << endl;
    }
}
