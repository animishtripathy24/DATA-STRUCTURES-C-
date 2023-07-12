#include<iostream>
using namespace std;

int climbStairs(int n)
{
    //base case

    //agar stairs basement me hai toh 0 hoga 
    if(n<0)
    {
        return 0;
    }
    
    //agar n=0 hai toh koi jarurat hi ni hai..
    if(n==0)
    {
        return 1;
    }

    //recurrence Relation
    return climbStairs(n-1)+climbStairs(n-2);
}

int main()
{
    int n;
    cin >> n;

    cout << climbStairs(n) << endl;
}