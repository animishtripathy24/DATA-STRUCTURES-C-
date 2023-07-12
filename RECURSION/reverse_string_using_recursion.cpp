#include<iostream>
using namespace std;

void reverseString(string &str,int start,int end)
{
    cout << "Call Received for" << "  " << str << endl;
    // base case
    //agar start aage nikal jaye end se...toh hume return kar dena hai...
    if(start>end)
    {
        return;
    }

    swap(str[start++],str[end--]);

    //recursive call
    reverseString(str,start,end);
}

int main()
{
    string str;
    cin >> str;
    cout << endl;


    //function call.....
    reverseString(str,0,str.size()-1);

    cout << endl;

    cout << "The reversed string is " << str << endl;
}