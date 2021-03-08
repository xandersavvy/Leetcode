class Solution {
public:
    int subtractProductAndSum(int x) {
        if(x<10)
            return 0;
        int sum=0;
        int prod=1;
        while(x!=0){
            sum+=(x%10);
            prod=prod*(x%10);
            x=x/10;
        }
        return prod-sum;
    }
};
//0 ms	5.9 MB
