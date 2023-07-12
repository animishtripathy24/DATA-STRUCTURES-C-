#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int number;
    cin >> number;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            int as=str[i];
            number+=2;
            cout << (as*number) << " ";
        }
        else
        {
            int as=str[i];
            number+=1;
            cout << (as*number) << " ";
        }
    }
}