#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverse(string& str,int start,int end)
{
	if(start>end)
	{
		return;
	}
	swap(str[start++],str[end--]);
	reverse(str,start,end);
}

int main()
{
	string s;
	getline(cin,s);
	int start=0;
	int end = s.size()-1;
	reverse(s,start,end);
	cout << "Thr reverse of the string is " << s << endl;
	
	
	return 0;
}