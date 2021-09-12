class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = m + n ;
        m--; n--;
    while (--j && m >= 0 && n >= 0)  
        nums1[j] = (nums1[m] > nums2[n])?nums1[m--}:nums2[n--];
    while (n >= 0) nums1[j--] = nums2[n--];
  }
};