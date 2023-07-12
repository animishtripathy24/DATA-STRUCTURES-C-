#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str,int start)
{
	if(start>(str.size()-start-1))
	{
		return true ;
	}
	if(str[start]!=str[(str.size()-start-1)])
	{
		return false;
	}
	else
	{
	 	return checkPalindrome(str,start+1);
	}
}

int main()
{
	string str;
	cin >> str;
	bool isPalindrome = checkPalindrome(str,0);
	
	if(isPalindrome)
	{
		cout << "The string is palindrome" << endl;
	}
	else
	{
		cout << "The string is not palindrome" << endl;
	}
	
	return 0;
}