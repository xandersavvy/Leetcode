# Pascal's Triangle
### Given an integer numRows, return the first numRows of Pascal's triangle. In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


![Pascals triangle Gif](https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif)
 

#
### Example 1:

    Input: numRows = 5
    Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
### Example 2:

    Input: numRows = 1
    Output: [[1]]
 

### Constraints:

    1 <= numRows <= 30

### Solution

```cpp
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1); //resize the vector according to i+1
            r[i][0] = r[i][i] = 1; //initialize front and back elements to 1
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j]; //set other elements
        }
        
        return r;
    }
};
```