class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string rest ="";
        int len=s.size();
        rest.resize(len);
        for(int i=0;i<len;i++)
            rest.at(indices[i])=s[i];
        return rest;
    }
};
//0 ms	15 MB
