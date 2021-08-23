//0 ms time complexity according to leetcode 
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int i=0;i<arr.size();i++){
            if(binary_search(arr.begin(),arr.begin()+i,arr[i]*2)){
                cout<<arr[i];
                return true;
            }
            else if(binary_search(arr.begin()+i+1,arr.end(),arr[i]*2)){
                cout<<arr[i];
                return true;
            }
        }
        return false;
    }
};
