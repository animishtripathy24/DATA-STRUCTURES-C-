#include<bits/stdc++.h>
using namespace std;

void reverse(string& str,int start,int end)
{
	cout << "The call received for " << str << endl;
	if(start>end)
	{
		return;
	}
	swap(str[start],str[end]);
	++start;
	--end;
	reverse(str,start,end);
}

int main()
{
	string s;
	getline(cin,s);
	int start=0;
	reverse(s,start,(s.size()-start-1));
	cout << endl;
	cout << "Thr reverse of the string is " << s << endl;
	
	
	return 0;
}