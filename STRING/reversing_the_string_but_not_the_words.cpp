#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	cout << str << endl;
	reverse(str.begin(),str.end());
	cout << str << endl;
	str.push_back(' ');
	cout << str << endl;
	int j=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==' ')
		{
			reverse(str.begin()+j,str.begin()+i);
			j=i+1;
		}
		
	}
	str.pop_back();
	cout << "The required string is:" << str << endl;
	
	return 0;
	
	
	
	
}