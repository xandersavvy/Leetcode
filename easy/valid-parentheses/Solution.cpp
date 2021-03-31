class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int len=s.size();
        for(int i=0;i<len;i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else if(!st.empty()){
                if(st.top()=='('&&s[i]==')')
                    st.pop();
                else if(st.top()=='['&&s[i]==']')
                    st.pop();
                else if(st.top()=='{'&&s[i]=='}')
                    st.pop();
                else
                    return false;
            }else{
                return false;
            }
        }
        return st.empty();
    }
};
