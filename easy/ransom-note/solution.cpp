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