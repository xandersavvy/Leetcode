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