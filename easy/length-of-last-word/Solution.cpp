class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        if(len<1) return 0;
        int count=0;
        for(int i=len-1;i>=0;i--)
            if(s[i]!=' ') count++;
            else if(count) return count; //this is due to some wierd test cases
        return count;
    }
};
