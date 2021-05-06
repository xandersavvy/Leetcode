class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count=1;
        int len=nums.size();
        for(int i=0;i<len;i++)
            if(nums[i]<0) count*=-1;
            else if(nums[i]==0) return 0;
        return count;
    }
};
