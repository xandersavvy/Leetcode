class Solution {
public:
    int xorOperation(int n, int start) {
      int xorOp = start;
        for(int i = 1; i < n; ++i) {
            xorOp ^= (start+2*i);
        }
     return xorOp;   
    }
};
//0 ms	5.8 MB
