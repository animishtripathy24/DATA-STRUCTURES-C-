#include<iostream>
using namespace std;

int main()
{
    //defining a pair
    pair<int,int>p;

    //initializing a pair- method-1

    //there are two ways to define a pair
    p=make_pair(10,20);  //this is the standard way of defining a pair
    //it will assign 10 as the first element and 20 as the second element in the pair 'p'
    cout<<"The elements of the pair are : "<<p.first<<" "<<p.second<<endl;
    //accessing individual elements using indexing
    cout<<"First Element = "<<p.first<<"\nSecond Element = "<<p.second<<endl;
    //We can create another pair and swap its values with the previous one
    pair <int, int> q= make_pair (56,98);
    cout << "\nBefore swapping\n";
    cout << "First element of q = " << q.first << ", Second element of q = " << q.second ;
    cout << "\nswapping the pairs\n";
    //swap function takes references of the pair as arguments so we need to pass &q instead of just q
    swap(p,q);   //after calling this line, the value of p becomes {56,98} and the value of
    //q becomes {10,20}
    cout << "\nafter swapping\n";
    cout << "First element of p = " << p.first << ", Second element of p = " << p.second ;
    cout << "\nFirst element of q = " << q.first << ", Second element of q = " << q.second ;
    cout << endl;

    //the second way to initialize the pair is:method-2
    p={10,20};

    //we can also declare array of pairs
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};

    //now if we have to print the array then we can simply print it using the for loop
    for(int i=0;i<3;i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }cout << endl;









    return 0;
}