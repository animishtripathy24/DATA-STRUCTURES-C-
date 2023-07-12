/*
You are given an array of characters letters that is sorted in non-decreasing order, 
and a character target. There are at least two different characters in letters.

Return the smallest character in letters that is lexicographically greater than target. 
If such a character does not exist, return the first character in letters.



Example 1:

Input: letters = ["c","f","j"], target = "a"
Output: "c"
Explanation: The smallest character that is lexicographically greater than 'a' 
in letters is 'c'.



Example 2:

Input: letters = ["c","f","j"], target = "c"
Output: "f"
Explanation: The smallest character that is lexicographically greater than 'c' 
in letters is 'f'.



Example 3:

Input: letters = ["x","x","y","y"], target = "z"
Output: "x"
Explanation: There are no characters in letters that is lexicographically greater than 'z'
so we return letters[0].


Constraints:

2 <= letters.length <= 104
letters[i] is a lowercase English letter.
letters is sorted in non-decreasing order.
letters contains at least two different characters.
target is a lowercase English letter.
*/

//code
#include<bits/stdc++.h>
using namespace std;

    char nextGreatestLetter(vector<char>& letters, char target) {
        int target_element=target-97;
        for(int i=0;i<letters.size();i++)
        {
            int element=letters[i]-97;
            if(element > target_element)
            {
                return letters[i];
            }
        }
        return letters[0];
    }

int main()
{
    int n;
    std::cin >> n;
    vector<char>letters;
    for(int i=0;i<n;i++)
    {
        char ch;
        std::cin >> ch;
        letters.push_back(ch);
    }
    std::cout << "Enter the target element" << endl;
    char target;
    std::cin >> target;

    std::cout << nextGreatestLetter(letters,target) << endl;
}