#include<iostream>
using namespace std;

bool checkPalindrome(string& str,int start)
{
    //base case
    if(start>(str.size()-start-1))
    {
        return 1;
    }

    if(str[start]!=str[str.size()-start-1])
    {
        return 0;
    }
    else
    {
        start++;
        return checkPalindrome(str,start);
    }
}

int main()
{
    string str;
    cin >> str;
    bool isPalindrome=checkPalindrome(str,0);
    if(isPalindrome)
    {
        cout << "The given string is palindrome" << endl;
    }
    else
    {
        cout << "The given string is not palindrome" << endl;
    }
}