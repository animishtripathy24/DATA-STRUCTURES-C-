#include<iostream>
using namespace std;

void reverseString(string &str,int start)
{
    cout << "Call received for  " << str << endl;

    //base case
    if(start>(str.size()-start-1))
    {
        return;
    }

    swap(str[start],str[str.size()-start-1]);
    start++;

    //recursive call
    reverseString(str,start);
}

int main()
{
    string str;
    cin >> str;
    cout << endl;


    //function call.....
    reverseString(str,0);

    cout << endl;

    cout << "The reversed string is " << str << endl;
}