class Solution {
public:
    int maxDepth(string s) {
        int count=0,max=0;
        for (char i:s){
            if(i=='(') count++;
            if(i==')') count--;
            if(count>max)
                max=count;
        }
        return max;
    }
};
//0 ms	6.1 MB
