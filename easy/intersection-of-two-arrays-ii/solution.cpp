class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> dict;
        int len1 = nums1.size();
        int len2 = nums2.size();
        for (int i =0;i<len1;i++) dict[nums1[i]]++;
        for (int i =0;i<len2;i++)  if (dict[nums2[i]]-- >0) res.push_back(nums2[i]);
        return res;
    }
};