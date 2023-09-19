#  Find the Duplicate Number
----
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

 

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3

----
Solving:
- If you ignore the constant space req, we ca just use a vector to memorize if the element happenned or not .
````cpp
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len= nums.size();
        vector<bool> numsF(len,false);
        for(int i:nums){
            if(numsF[i]) return i;
            else numsF[i]=true;
        }
        return -1;
    }
};

````
-  The optimal one is using two pointer if we get circle one we got our thing
```cpp
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[nums[0]];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        fast =0;
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
```