/*
We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Given a string word, return true if the usage of capitals in it is right.



Example 1:

Input: word = "USA"
Output: true
Example 2:

Input: word = "FlaG"
Output: false


Constraints:

1 <= word.length <= 100
word consists of lowercase and uppercase English letters. 
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count_upper=0;
        int count_lower=0;
        for(int i=0;i<word.length();i++)
        {
            if(word[i]>=65 && word[i]<=90)
            {
                count_upper++;
            }
            else
            {
                count_lower++;
            }
        }
        if((word[0]>=65 && word[0]<=90 && count_upper==1) || count_upper==word.size() || count_lower==word.size())
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
};