// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1,mid;
        if(isBadVersion(1)) return 1;
        else if(!isBadVersion(n-1)) return n;
        while(left < n){
            mid = left + (n - left)/2;
            if(!isBadVersion(mid)) left = mid +1;
            else n = mid;    
            }   
        return n;    
        
    }
};