#  Arithmetic Slices
An integer array is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.

    For example, [1,3,5,7,9], [7,7,7,7], and [3,-1,-5,-9] are arithmetic sequences.

Given an integer array nums, return the number of arithmetic subarrays of nums. A subarray is a contiguous subsequence of the array.

#### Example 1:

    Input: nums = [1,2,3,4]
    Output: 3
Explanation: We have 3 arithmetic slices in nums: [1, 2, 3], [2, 3, 4] and [1,2,3,4] itself.

#### Example 2:

    Input: nums = [1]
    Output: 0

 

#### Constraints:

    1 <= nums.length <= 5000
    -1000 <= nums[i] <= 1000

# Solutions

```cpp
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

```