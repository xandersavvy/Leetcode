class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        int len=accounts.size();
        for(int i=0;i<len;i++){
            int sum = accumulate(accounts[i].begin(), accounts[i].end(), 0) ;  
            if(sum>max)
                max=sum;
        }
        return max;
    }
};
//4 ms	7.8 MB
