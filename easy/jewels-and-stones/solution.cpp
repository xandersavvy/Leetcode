class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(auto i:jewels)
            for(auto j:stones)
                if(i==j)
                    count++;
        return count;
    }
};
//0 ms	6 MB
