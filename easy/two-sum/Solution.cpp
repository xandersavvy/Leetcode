class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int y;
        for(int i=0;i<(nums.size()-1);i++){
            y=target-nums[i];
            for(int j=(i+1);j<nums.size();j++) if(y==nums[j]) return {j,i}; 
        }
        return {};
    }
};
