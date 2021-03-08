class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int len = nums.size();
        vector<int> decomp;
        for(int i=0;i<len;i++){
            for(int j=0;j<nums[i];j++)
                decomp.push_back(nums[i+1]);
            i++;
        }
        return decomp;
    }
};
