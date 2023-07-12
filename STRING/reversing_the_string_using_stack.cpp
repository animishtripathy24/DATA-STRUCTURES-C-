#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack<char>s;
	string str;
	getline(cin,str);
	for(int i=0;i<str.size();i++)
	{
		s.push(str[i]);
	}
	while(!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	
}
