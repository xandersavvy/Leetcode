class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string word1Str="";
        string word2Str="";
        for(string i:word1)
            word1Str+=i;
        for(string i:word2)
            word2Str+=i;
        return word1Str==word2Str;
            
    }
};
