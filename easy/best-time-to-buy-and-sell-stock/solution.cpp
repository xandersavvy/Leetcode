class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0 ;
        int min = prices[0];
        int len= prices.size();
        for(int i=1;i<len;i++){
            int dif = prices[i] - min;
            if(dif<0) min = prices[i] ;
            else if( dif > profit ) profit=dif;
        }    
        //kadane's algorithm
        return profit;
    }
};