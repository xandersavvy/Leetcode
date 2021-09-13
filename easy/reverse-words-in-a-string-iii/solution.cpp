class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int len = s.size();
        for (int j = 0; j < len; j++) 
            if (s[j] == ' ') {
                reverse(s.begin() + i, s.begin() + j);
                i = ++j;
            }
        reverse(s.begin() + i, s.end());
        return s;
    }
};