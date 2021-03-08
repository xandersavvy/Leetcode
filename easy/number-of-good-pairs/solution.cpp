class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        int len=nums.size();
        for(int i=0;i<(len-1);i++){
            for(int j=(i+1);j<len;j++)
                if(nums[i]==nums[j])
                    count++;
        }
        return count;
    }
};
//0 ms	7.3 MB
