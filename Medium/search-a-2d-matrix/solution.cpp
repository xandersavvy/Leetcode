class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int cright = matrix.size()-1;
        int rright = matrix[0].size()-1;
        int cleft=0 , mid ;
        while(cright>cleft){
            mid = (cright + cleft)/2;
            if(target>matrix[mid][0]){
                if(target>matrix[mid][rright]) cleft = mid+1;
                else return binary_search(matrix[mid].begin(),matrix[mid].end(),target);
            }
            else cright  = mid;
        }
        if(cright==cleft) return binary_search(matrix[cright].begin(),matrix[cright].end(),target); 
        return false;
    }
};