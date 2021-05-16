class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int sum = 0, count = 0;
        int len = nums.size();
        for (int i = 2; i < len; i++)
            if (nums[i] + nums[i - 2] == 2*nums[i - 1] ) sum=sum+(++count); // we are taking sub arrays of three if sum of left and right side no. is  double of middle thn we can say it is arithmetic  now as middle and right is already been detected so for overlapping it will cause a more array to be arithmetic
            else count = 0; // if not then count will be 0 as there will be no extra arithmetic array
        return sum;
    }
};
