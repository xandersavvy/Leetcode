class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        if(nums[0]>=0) { // if no negative exists then just return the squared
            for(int i=0;i<n;i++) nums[i]*=nums[i];
            return nums;
        }
        int start=0,pos,end;
         end= pos = n-1;
        vector <int> res(n);
        while(start <= end) 
            res[pos--]= (abs(nums[start])<abs(nums[end]))?nums[end]*nums[end--]:nums[start]*nums[start++]; 
        //else from check if the bback or the front(-ve or the positive is )
        return res;
    }
};