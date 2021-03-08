class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int len = nums.size();
        vector<int> sortedNumbers=nums;
        vector<int> smallerNumbers={};
        sort(sortedNumbers.begin(),sortedNumbers.end());
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                if(nums[i]==sortedNumbers[j])
                {
                    smallerNumbers.push_back(j);
                    break;
                }
            }
           
        }
        return smallerNumbers;
    }
};
//24 ms	10.2 MB
