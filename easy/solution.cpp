class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int prev_row = mat.size();
        int prev_col = mat[0].size();
        int elem_count = prev_row *prev_col;
        if(elem_count!=(r*c)) return mat;
        vector<vector<int>> new_mat(r, vector<int>(c));
        for(int i = 0; i< elem_count ; i++)        
            new_mat[i/c][i%c] = mat[i/prev_col][i%prev_col];
        return new_mat;
    }
};