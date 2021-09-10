class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len=nums.size();
        int sum=nums[0],res=nums[0];
        for(int i=1;i<len;i++)
        {
            sum = max(nums[i],nums[i]+sum);
            if(sum>res) res=sum;
        }
        return res;
    }
};