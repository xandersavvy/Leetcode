class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int dict[256];
        memset(dict,-1,sizeof(dict));
        int maxLen = 0, start = -1;
        int len = s.size();
        for (int i = 0; i <len; i++) {
            if (dict[s[i]] > start) start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};