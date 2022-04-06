# Valid Palindrome II

### Given a string s, return true if the s can be palindrome after deleting at most one character from it.

**Example 1:**

    Input: s = "aba"
    Output: true

**Example 2:**

    Input: s = "abca"
    Output: true
Explanation: You could delete the character 'c'.

**Example 3:**

    Input: s = "abc"
    Output: false

 

Constraints:

    1 <= s.length <= 105
    s consists of lowercase English letters.

# Solutions:

```cpp
class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
        int countLeft= 0, countRight=0;
        while(l<r){
            if(s[l]==s[r]) r--;
            else countLeft++;
            l++;
        }
        l = 0;
        r = s.size()-1;
        while(l<r){
            if(s[l]==s[r]) l++;
            else countRight++;
            r--;
        }
        return (countLeft < 2 || countRight < 2)?true:false;
    }
};
```