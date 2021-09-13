class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len = numbers.size();
        for(int i=len-1;i>=0;i--)
                for(int j=0;j<i;j++) 
                    if(numbers[i]+numbers[j]==target) return {j+1,i+1};
                    else if(numbers[i]+numbers[j]>target) break;
        return {-1,-1};
    }
};