class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0;
        int sum=0;
        for(int i:gain){
            sum+=i;
            if(sum > max)
                max=sum;
        }
        return max;
    }
};
