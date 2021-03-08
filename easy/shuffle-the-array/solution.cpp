class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shu ={};
        for(int i=0;i<n;i++){
            shu.push_back(nums[i]);
            shu.push_back(nums[i+n]);
        }
        return shu;
    }
};
//8 ms	9.7 MB
