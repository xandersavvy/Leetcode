class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=words.size();
        for(int i=0;i<words.size();i++){
            for(char j:words[i]){
                if(allowed.find(j)==string::npos){
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};
