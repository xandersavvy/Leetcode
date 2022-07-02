# Group Anagrams

Given an array of strings strs, group the anagrams together. You can return the answer in any order.An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

## Example 1:

    Input: strs = ["eat","tea","tan","ate","nat","bat"]
    Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

## Example 2:

    Input: strs = [""]
    Output: [[""]]

## Example 3:

    Input: strs = ["a"]
    Output: [["a"]]
 

## Constraints:

    1 <= strs.length <= 104
    0 <= strs[i].length <= 100

strs[i] consists of lowercase English letters.

# Solution

```cpp
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> m;
        for (string s : strs) {
            string temp = s;
            sort(temp.begin(), temp.end());
            m[temp].push_back(s);
        }
        
        for (auto i : m) res.push_back(i.second);
        
        return res;
    }
};
```