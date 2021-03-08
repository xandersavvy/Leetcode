class Solution {
public:
    int numberOfSteps (int num) {
        int count=0;
        if(num==0)
        while(num>1){
            if(num%2==0){
                count++;
                num=num/2;
            }else{
                count=count+2;
                num=(num-1)/2;
            }
        }
        return (num==1)?++count:0;
    }
};
//0 ms	5.8 MB
