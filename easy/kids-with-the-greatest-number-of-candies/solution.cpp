class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int  max=INT_MIN;
        vector<bool> po;
        for(int i : candies)
            if(i>max)
                max=i;
        for(int i : candies)
            if((i+extraCandies)>=max)
                po.push_back(true);
            else
                po.push_back(false);
        return po;
    }
};
//runtime - 4ms memory = 9MB
