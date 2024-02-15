#include<bits/stdc++.h>
using namespace std;

//printing the binary number
void printBinary(int num)
{
    cout << endl << "The equivalent binary form is" << endl;
    for(int i=10;i>=0;i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main()
{
    //the only difference between the uppercase and lowercase letter
    // in lowercase letter, it has the same representation as the uppercase
    //only the 5th bit is set
    char A = 'A';
    char a = A | (1 << 5);
    cout << A << " " << a << endl;

    //if we have to make the lowercase letter into uppercase then 
    // we have to make the 5th bit unset
    char upper=(a & ~(1 << 5));
    cout << upper << endl;

    //another method
    char C = 'C';
    char c = C | ' ';
    cout << C << " " << c << endl;

    //if we have to convert into uppercase then
    char upp=(c & '_');
    cout << upp << endl;


}