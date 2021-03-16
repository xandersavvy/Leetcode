class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      vector<int> dupl(2);
      long long int s1 = accumulate(nums.begin(), nums.end(), 0);
      int len = nums.size();
      long long int exp_sum = (len * (len + 1)) / 2;
      for (int i = 0; i < len; i++) {
         if (nums[abs(nums[i]) - 1] > 0) {
            nums[abs(nums[i]) - 1] = - nums[abs(nums[i]) - 1];
         }
         else {
            dupl[0] = abs(nums[i]);
         break;
         }
      }
      dupl[1] = dupl[0] - (s1 - exp_sum);
      return v;
    }
};

// I learned it from here https://www.tutorialspoint.com/set-mismatch-in-cplusplus .
