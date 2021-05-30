class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0,i=1;
        int len = flowerbed.size();
        if(len==1) return (flowerbed[0]==0)?n<=1:n<=0;
        if(len==2) return (flowerbed[0]==0&&flowerbed[1]==0)?n<=1:n<=0;
        if(!flowerbed[0]&&!flowerbed[1]) {
            count++;
            i++;
        }
        for(;i<len-1;i++)
            if(!flowerbed[i-1]&&!flowerbed[i]&&!flowerbed[i+1])
            {
                flowerbed[i]=1;
                count++;
                i++;
            }
        return (!flowerbed[len-1]&&!flowerbed[len-2])?n<=++count:n<=count;
    }
};
