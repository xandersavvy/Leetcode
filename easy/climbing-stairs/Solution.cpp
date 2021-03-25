class Solution {
public:
    int climbStairs(int n) {
    int j=2,k=1,temp=0;
    for(int i=2;i<n;i++){
        temp=j;
        j+=k;
        k=temp;
    }
        return (n>1)?j:1;
    }
};
