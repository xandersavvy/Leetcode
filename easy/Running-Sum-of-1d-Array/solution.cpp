class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sumVec;
        int sum=0;
        for(int i : nums){  
            sum=sum+i;  
            sumVec.push_back(sum);
        }
        return sumVec;
    }
};
//runtime - 0ms Memory - 8.3 mb
