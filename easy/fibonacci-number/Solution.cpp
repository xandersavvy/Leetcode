class Solution {
public:
    int fib(int n) {
         int j=1,k=0,temp=0;
    for(int i=1;i<n;i++){
        temp=j;
        j+=k;
        k=temp;
    }
        return (n>0)?j:0;
    }
};
