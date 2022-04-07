# Permutation in String
### Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise. In other words, return true if one of s1's permutations is the substring of s2.

### Example 1:

    Input: s1 = "ab", s2 = "eidbaooo"
    Output: true
    Explanation: s2 contains one permutation of s1 ("ba").
### Example 2:

    Input: s1 = "ab", s2 = "eidboaoo"
    Output: false

### Constraints:

    1 <= s1.length, s2.length <= 104
    s1 and s2 consist of lowercase English letters.

### Solution
```cpp
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
	    vector<int> cur(26), goal(26);
	    int len1 = s1.size();
	    int len2 = s2.size();
	    for(int i = 0; i < len1; i++) goal[s1[i] - 'a']++;
	    for(int i = 0; i < len2; i++) {
		    cur[s2[i] - 'a']++;
		    if(i >= len1) cur[s2[i - len1] - 'a']--;
		    if(goal == cur) return true;
	    }
	    return false;
    }
};
```