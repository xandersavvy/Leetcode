//not efficient my first solution

class Solution {
public:
    int numDifferentIntegers(string word) {
        int len = word.size();
        if(len==1) return(isdigit(word[0]))?1:0;
        else {
        set<string> st{};
        bool fl = false;
        string num="";
        for(int i=0;i<len;i++) if(isdigit(word[i])){
                int j=i;
                for(;j<len&&isdigit(word[j]);j++,i++) 
                    if(!num.size()&&word[j]=='0') fl=true;
                    else num = num + word[j];
                if(num.size()) st.insert(num);
                else if(fl) st.insert("0");
                fl = false;
                num="";
            }
        }
        return st.size();
    }
};
