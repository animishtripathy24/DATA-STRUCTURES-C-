#include<bits/stdc++.h>
using namespace std;

int minIndexChar(string str, string patt)
{
    unordered_map<char,int>m;
        for(int i=0;i<patt.size();i++)
        {
            m[patt[i]]++;
        }
        for(int i=0;i<str.size();i++)
        {
            if(m[str[i]]!=0)
            {
                return i;
            }
        }
        return -1;


    // time limit exceeded for this solution....
    //     vector<int>v;
    //     multimap<char,int>m;
    //     for(int i=0;i<str.size();i++)
    //     {
    //         m.insert(make_pair(str[i],i));
    //     }
    //     for(int i=0;i<patt.size();i++)
    //     {
    //         auto it=m.find(patt[i]);
    //         if(it==m.end())
    //         {
    //             continue;
    //         }
    //         else
    //         {
    //             v.push_back(it->second);
    //         }
    //     }
    //     if(v.size()==0)
    //     {
    //         return -1;
    //     }
    //     else
    //     {
    //         auto ite=min_element(v.begin(),v.end());
    //         return *(ite);
    //     }
        
}
int main()
{
    string str,patt;
    std::cin >> str >> patt;
    std::cout << minIndexChar(str,patt) << endl;
}