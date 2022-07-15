# Max Area of Island

You are given an m x n binary matrix grid. An island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.The area of an island is the number of cells with a value 1 in the island.

Return the maximum area of an island in grid. If there is no island, return 0.

Example 1:
![Max area ](https://assets.leetcode.com/uploads/2021/05/01/maxarea1-grid.jpg)


    Input: grid = [[0,0,1,0,0,0,0,1,0,0,0,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,1,1,0,1,0,0,0,0,0,0,0,0],[0,1,0,0,1,1,0,0,1,0,1,0,0],[0,1,0,0,1,1,0,0,1,1,1,0,0],[0,0,0,0,0,0,0,0,0,0,1,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,0,0,0,0,0,0,1,1,0,0,0,0]]
    Output: 6

Explanation: The answer is not 11, because the island must be connected 4-directionally.

Example 2:

    Input: grid = [[0,0,0,0,0,0,0,0]]
    Output: 0
 

Constraints:

- m == grid.length
- n == grid[i].length
- 1 <= m, n <= 50
- grid[i][j] is either 0 or 1.

# Solutions

[![Neetcode explanation](https://i.ytimg.com/an_webp/iJGr1OtmH0c/mqdefault_6s.webp?du=3000&sqp=CPm0w5YG&rs=AOn4CLAM7cSA0KGKCqWYQcJ2vYv_GssEjw)](https://youtu.be/iJGr1OtmH0c)
This one is in java and implements DFS

```java
class Solution {
    public int maxAreaOfIsland(int[][] grid) {
     int max_area = 0;
        for(int i = 0; i < grid.length; i++)
            for(int j = 0; j < grid[0].length; j++)
                if(grid[i][j] == 1) max_area = Math.max(max_area, AreaOfIsland(grid, i, j));
        return max_area;
    }
    
    public int AreaOfIsland(int[][] grid, int i, int j){
        if( i >= 0 && i < grid.length && j >= 0 && j < grid[0].length && grid[i][j] == 1){
            grid[i][j] = 0;
            return 1 + AreaOfIsland(grid, i+1, j) + AreaOfIsland(grid, i-1, j) + AreaOfIsland(grid, i, j-1) + AreaOfIsland(grid, i, j+1);
        }
        return 0;
    }
}
```