class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        size_t n = nums.size();
         i = 0, j = 0;
        while (j < n) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
        }
};
