# Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
 

**Example 1:**

Input: strs = ["flower","flow","flight"]
Output: "fl"

**Example 2:**

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

 

**Constraints:**

    1 <= strs.length <= 200
    0 <= strs[i].length <= 200
    strs[i] consists of only lower-case English letters.

# Solutions
```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        int len = strs.size();
        int l1 = strs[0].size();
        int count=0;
        for(int i=0;i<l1;i++){ // first check with first two strings
            if(strs[0][i]==strs[1][i]) count++;
            else break;
        }
        
        for(int i=2;i<len;i++){
            for(int j=0;j<=count;j++){ //now check with others
                if(strs[0][j]!=strs[i][j]){
                    count=j;
                    break;
                }
            }
        }
        return strs[0].substr(0,count); //return the substring
    }
};
```