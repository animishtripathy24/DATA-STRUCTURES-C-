#include<iostream>
using namespace std;

void printCounting(int n)
{
    //base case
    if(n==0)
    {
        return;
    }
    
    //HEAD RECURSION kyunki recurrence relation processing se pehle aa rha hai
    printCounting(n-1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    printCounting(n);
}