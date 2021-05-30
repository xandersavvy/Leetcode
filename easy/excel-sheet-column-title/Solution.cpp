class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s1{""};
        while(columnNumber){
            columnNumber--;
            s1=(char)(columnNumber%26+65)+s1;
            columnNumber/=26;
        }
            return s1;
    }
};
