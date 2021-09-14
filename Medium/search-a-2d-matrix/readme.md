# Search a 2D Matrix
### Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

- Integers in each row are sorted from left to right.
- The first integer of each row is greater than the last integer of the previous row.
 

### Example 1:

![Search 2D 1](https://assets.leetcode.com/uploads/2020/10/05/mat.jpg)


    Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
    Output: true
### Example 2:

![Search 2d 3](https://assets.leetcode.com/uploads/2020/10/05/mat2.jpg)


    Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
    Output: false
 

### Constraints:

    m == matrix.length
    n == matrix[i].length
    1 <= m, n <= 100
    -104 <= matrix[i][j], target <= 104

### Solution :
```cpp
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
```