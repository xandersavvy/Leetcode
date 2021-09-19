# Ransom Note

### Given two stings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise. Each letter in magazine can only be used once in ransomNote.

### Example 1:

    Input: ransomNote = "a", magazine = "b"
    Output: false
### Example 2:

    Input: ransomNote = "aa", magazine = "ab"
    Output: false
### Example 3:
    Input: ransomNote = "aa", magazine = "aab"
    Output: true

### Constraints:
    1 <= ransomNote.length, magazine.length <= 105
    ransomNote and magazine consist of lowercase English letters.

### Solutions :

```cpp
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int len1 = ransomNote.size();
        int len2 = magazine.size();
        if(len1>len2) return false;
        int a[26];
        int b[26];
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0;i<len1;i++) a[ransomNote[i]-'a']++;
        for(int i=0;i<len2;i++) b[magazine[i]-'a']++;
        for(int i=0;i<26;i++) if(b[i]<a[i]) return false;
        return true;
    }
};
```