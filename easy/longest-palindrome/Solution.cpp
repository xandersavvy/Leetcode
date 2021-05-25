class Solution {
public:
    int longestPalindrome(string s){
        int len=s.size();
        bool ch[123]{false};
        int count=0;
        for(int i=0;i<len;i++)
            if(!ch[(int)s[i]]) {
                count += std::count(s.begin(),s.end(),s[i]);
                if(count%2!=0)  {
                    count--;
                    ch[0]=true;// as we won't be encounter ch[0] we can use it as our extra variable
                }
                ch[(int)s[i]] = true;
            }
        return (ch[0])?++count:count;
    }
};
