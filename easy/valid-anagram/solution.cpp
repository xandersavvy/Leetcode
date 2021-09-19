class Solution {
public:
    bool isAnagram(string s, string t) {   
        int len1 = s.size();
        int len2 = t.size();
        if(len1!=len2) return false;
        int a[26];
        int b[26];
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0;i<len1;i++) a[s[i]-'a']++;
        for(int i=0;i<len2;i++) b[t[i]-'a']++;
        for(int i=0;i<26;i++) if(b[i]!=a[i]) return false;
        return true;
    
    }
};