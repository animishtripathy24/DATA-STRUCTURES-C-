#include<bits/stdc++.h>
using namespace std;

unordered_map<int,string>m={{0,"ZERO"},{1,"ONE"},{2,"TWO"},{3,"THREE"},{4,"FOUR"},{5,"FIVE"},{6,"SIX"},{7,"SEVEN"},{8,"EIGHT"},{9,"NINE"}};

void sayDigits(int n)
{
    //base case
    if(n==0)
    {
        return;
    }

    //processing
    int digits=n%10;
    n=n/10;
    

    //calling the function ....baaaki ka recursion sambhal lega...
    sayDigits(n); 

    cout << m[digits] << " ";
}

int main()
{
    int n;
    cin >> n;
    sayDigits(n);

}