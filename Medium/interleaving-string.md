# Interleaving String

Given strings s1, s2, and s3, find whether s3 is formed by an interleaving of s1 and s2.An interleaving of two strings s and t is a configuration where they are divided into non-empty substrings such that:

    s = s1 + s2 + ... + sn
    t = t1 + t2 + ... + tm
    |n - m| <= 1
The interleaving is s1 + t1 + s2 + t2 + s3 + t3 + ... or t1 + s1 + t2 + s2 + t3 + s3 + ...
Note: a + b is the concatenation of strings a and b.

Example 1:

Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"

Output: true

Example 2:

Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc"

Output: false

Example 3:

Input: s1 = "", s2 = "", s3 = ""

Output: true
 

Constraints:

0 <= s1.length, s2.length <= 100

0 <= s3.length <= 200

s1, s2, and s3 consist of lowercase English letters.

# SOlution
```cpp
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int s1l = s1.size();
        int s2l = s2.size();
        if(s3.size() != s1l + s2l) return false;
        bool table[s1l+1][s2l+1];
        for(int i=0; i<=s1l; i++){
            for(int j=0; j<=s2l; j++){
            if(!i && !j) table[i][j] = true;
            else if(!i) table[i][j] = ( table[i][j-1] && s2[j-1] == s3[i+j-1]);
            else if(!j) table[i][j] = ( table[i-1][j] && s1[i-1] == s3[i+j-1]);
            else table[i][j] = (table[i-1][j] && s1[i-1] == s3[i+j-1] ) || (table[i][j-1] && s2[j-1] == s3[i+j-1] );
            }
        }
        
        return table[s1l][s2l];
    }
};
``` 

Follow up: Could you solve it using only O(s2.length) additional memory space?