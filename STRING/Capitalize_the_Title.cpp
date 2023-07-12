/*
You are given a string title consisting of one or more words separated by a single space, where each word consists of English letters. Capitalize the string by changing the capitalization of each word such that:

If the length of the word is 1 or 2 letters, change all letters to lowercase.
Otherwise, change the first letter to uppercase and the remaining letters to lowercase.
Return the capitalized title.



Example 1:

Input: title = "capiTalIze tHe titLe"
Output: "Capitalize The Title"
Explanation:
Since all the words have a length of at least 3, the first letter of each word is uppercase, and the remaining letters are lowercase.


Example 2:

Input: title = "First leTTeR of EACH Word"
Output: "First Letter of Each Word"
Explanation:
The word "of" has length 2, so it is all lowercase.
The remaining words have a length of at least 3, so the first letter of each remaining word is uppercase, and the remaining letters are lowercase.
Example 3:

Input: title = "i lOve leetcode"
Output: "i Love Leetcode"
Explanation:
The word "i" has length 1, so it is lowercase.
The remaining words have a length of at least 3, so the first letter of each remaining word is uppercase, and the remaining letters are lowercase.


Constraints:

1 <= title.length <= 100
title consists of words separated by a single space without any leading or trailing spaces.
Each word consists of uppercase and lowercase English letters and is non-empty.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    bool check_valid(string  str)
    {
        if(str.size()==1 || str.size()==2)
        {
            return 0;
        }
        return 1;
    }
public:
    string capitalizeTitle(string title) {
        string ans,res;
        title.push_back(' ');
        int j=0;
        for(int i=0;i<title.size();i++)
        {
            if(title[i]==' ')
            {
                for(int ch=j;ch<i;ch++)
                {
                    ans.push_back(title[ch]);
                }
                if(check_valid(ans))
                {
                    res.push_back(toupper(title[j]));
                    for(int value=j+1;value<i;value++)
                    {
                        res.push_back(tolower(title[value]));
                    }
                    j=i+1;
                }
                else
                {
                    for(int value=j;value<=i-1;value++)
                    {
                        res.push_back(tolower(title[value]));
                    }
                    j=i+1;
                }
                ans.erase();
                res.push_back(' ');
            }
        }
        res.pop_back();
        return res;
        
    }
};