//after optimizing the solution and using substr
class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string> st{};
        bool fl = false;
        string num="";
        int len= word.size();
        if(len==1) return(isdigit(word[0]))?1:0;
        else {
        for(int i=0;i<len;i++) 
            if(isdigit(word[i])){
                while(word[i]=='0') { fl=true; i++; }
                int j =  0;
                while(isdigit(word[i+j])&&(i+j)<len) j++;
                if(!j&&fl) st.insert("0"); //if the number is 0;
                else st.insert(word.substr(i,j));
                i+=j;
                fl = false;
            }
        }
        return st.size();
    }
};
