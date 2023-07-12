#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> ans)
{
    int start=0;
    int end=ans.size()-1;

    while(start<end)
    {
        swap(ans[start],ans[end]);
        start++;
        end--;
    }
    return ans;
}

void print(vector<int>v )
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
}

int main()
{
    vector<int>v;

    //inserting elements into the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int> ans = reverse(v);

    cout<<"the array before reversing is:"<<endl;
    print(v);

    cout<<"the reverse array is:"<<endl;
    print(ans);

}
