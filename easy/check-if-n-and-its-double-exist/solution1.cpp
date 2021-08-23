//using set function tcmplxity - 4ms find in set uses o(logn)
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       int len=arr.size();
        set<int> half; //to store the halfs
        set<int> dbl;//to store the doubles
        if(arr[0]%2==0) half.insert(arr[0]/2); 
        dbl.insert(arr[0]*2);
        for(int i=1;i<len;i++){
            auto it1 = half.find(arr[i]); // check if the current number is half or double of any previous number if yes then return
            auto it2 = dbl.find(arr[i]);
            if(it1!=half.end()||it2!=dbl.end()) return true;
            else {
                if(arr[i]%2==0) half.insert(arr[i]/2); //if this is an odd number no need to store the half 
                if(arr[i]<501&&arr[i]>-501) dbl.insert(arr[i]*2);//if it's exceed 501 it's limit will exceed 1000 so no need to store that.
            }
        }
        return false;
    }
};
