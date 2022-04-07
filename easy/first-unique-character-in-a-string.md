# First Unique Character in a String

### Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

### Example 1:

    Input: s = "leetcode"
    Output: 0
### Example 2:

    Input: s = "loveleetcode"
    Output: 2
### Example 3:

    Input: s = "aabb"
    Output: -1
 
### Constraints:

    1 <= s.length <= 105
    s consists of only lowercase English letters

### Solutions :

```cpp
class Solution {
public:
    int firstUniqChar(string s) {
        bool a[26];
        memset(a, true, sizeof(a));
        int len = s.size();
        for(int i=0;i<len;i++) if(a[s[i]-'a']){
            if(s.find(s[i],i+1)==string::npos) return i;
            else a[s[i]-'a'] = false;
            }
        return -1;
    }
};
```