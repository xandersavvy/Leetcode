class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int key,count=0;
        switch(ruleKey[0]){
            case 't' : 
                    key=0;
                    break;
            case 'c':
                    key=1;
                    break;
            case 'n':
                key=2;
                break;
        }
        for(int i=0;i<items.size();i++){
            if(items[i][key]==ruleValue)
                count++;
        }
        return count;
        
    }
};
