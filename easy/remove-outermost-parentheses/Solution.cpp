class Solution {
public:
    string removeOuterParentheses(string S) {
        int count = 0;
        string str;
        for (char c : S) 
            if (c == '(' && count++)  str += '(';
            else if (c == ')' && --count) str += ')';
        return str;
    }
};
