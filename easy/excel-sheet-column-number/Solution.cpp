class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum =0;
        for(auto i:columnTitle)
            sum=26*sum+((int)i-64);
        return sum;
    }
};
