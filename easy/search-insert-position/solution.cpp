class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(binary_search(nums.begin(), nums.end(), target))
        {
            vector<int>::iterator it;
            it = find(nums.begin(), nums.end(), target);
            return it - nums.begin();
        }
        else return (lower_bound(nums.begin(), nums.end(), target) - nums.begin());
    }
};
//took help from leetcode as I was too exhausted and sleepy after a hectic unpaid intenship
