class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int len=arr.size();
        if(len<3) return false;
        int i=1;
        if(arr[0]>=arr[1]) return false;
        for(;i<len-1;i++){
            if(arr[i-1]==arr[i]) return false;
            else if (arr[i-1]>arr[i]) break;
        }
        for(;i<len;i++) if(arr[i-1]<=arr[i]) return false;
        return true;
    }
};
