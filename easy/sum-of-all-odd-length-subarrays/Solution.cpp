class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       int sum = 0;
        int n = arr.size();
        vector<int> dp(n);
        dp[0] = arr[0];
        for(int i = 1; i<n; i++){
            dp[i] = arr[i] + dp[i-1];
        }
        int subSize = 3;
        sum += dp[n-1];
        while(subSize <= n){
            for(int st = 0; st<n-subSize+1; st++){
                int end = st + subSize -1;
                if(st != 0) sum += dp[end] - dp[st-1];
                else
                    sum += dp[end];
            }
            subSize += 2;
        }
        return sum;
    }
};
