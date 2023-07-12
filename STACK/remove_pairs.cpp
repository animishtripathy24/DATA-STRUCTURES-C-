#include<bits/stdc++.h>
using namespace std;

string removePairs(string &str)
{
    stack<char>s;
    for(int i=0;i<str.size();i++)
    {
        //if the stack is not empty and the top element is equal to the str[i] then pop the top element and continue
        if(!s.empty() && str[i]==s.top())
        {
            s.pop();
        }
        else
        {
            s.push(str[i]);
        }
    }
    if(s.empty())
    {
        return "-1";
    }
    string ans;
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(),ans.end());

    return ans;
}

int main()
{
    string str;
    cin >> str;
    string ans=removePairs(str);
    for(char &value:ans)
    {
        cout << value; 
    }


}