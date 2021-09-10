class Solution {
public:
    int search(vector<int>& nums, int target) {
        int right = nums.size()-1; 
        int left = 0,mid;
        while(left<=right){
            mid = left + (right - left) / 2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target) left=mid+1;
            else right = mid-1;
        }
        return -1;
    }
};