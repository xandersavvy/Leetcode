class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> lst;
        int len=nums.size();
        sort(nums.begin(),nums.end(),std::greater<int>());
        for(int i=0;i<len;i++)
            lst.insert(nums[i]);
        len=lst.size();
        if(len>2)
        return *next(lst.begin(),(lst.size()-3));
        else if(len>1)
            return (nums[0]>nums[1])?nums[0]:nums[1];
        else
            return nums[0];
        return 0;
    }
};
