# Out of Boundary Paths

There is an m x n grid with a ball. The ball is initially at the position [startRow, startColumn]. You are allowed to move the ball to one of the four adjacent cells in the grid (possibly out of the grid crossing the grid boundary). You can apply at most maxMove moves to the ball.

Given the five integers m, n, maxMove, startRow, startColumn, return the number of paths to move the ball out of the grid boundary. Since the answer can be very large, return it modulo 109 + 7.

 

Example 1:

![Out of Boundary Paths](https://assets.leetcode.com/uploads/2021/04/28/out_of_boundary_paths_1.png)

    Input: m = 2, n = 2, maxMove = 2, startRow = 0, startColumn = 0
    Output: 6

Example 2:

![Out of boundary paths ii](https://assets.leetcode.com/uploads/2021/04/28/out_of_boundary_paths_2.png)

    Input: m = 1, n = 3, maxMove = 3, startRow = 0, startColumn = 1
    Output: 12
 

Constraints:

1 <= m, n <= 50
0 <= maxMove <= 50
0 <= startRow < m
0 <= startColumn < n


# Solutions
This one is in Java
[![Out of boundary paths solve](https://i.ytimg.com/vi/Ik8gTTUrtQk/hqdefault.jpg?sqp=-oaymwEcCOADEI4CSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLARNjcW6-MLfxOXtwRMQmM_h9wiYQ)](https://www.youtube.com/watch?v=Ik8gTTUrtQk)

```java
class Solution {
    public int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
          int M = 1000000000 + 7;
    int dp[][] = new int[m][n];
    dp[startRow][startColumn] = 1;
    int count = 0;
    for (int moves = 1; moves <= maxMove; moves++) {
      int[][] temp = new int[m][n];
      for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
          if (i == m - 1) count = (count + dp[i][j]) % M;
          if (j == n - 1) count = (count + dp[i][j]) % M;
          if (i == 0) count = (count + dp[i][j]) % M;
          if (j == 0) count = (count + dp[i][j]) % M;
          temp[i][j] = (
              ((i > 0 ? dp[i - 1][j] : 0) + (i < m - 1 ? dp[i + 1][j] : 0)) % M +
              ((j > 0 ? dp[i][j - 1] : 0) + (j < n - 1 ? dp[i][j + 1] : 0)) % M
          ) % M;
        }
      }
      dp = temp;
    }
    return count;
    }
}
```
The idea behind this approach is that if we can reach some position in xx moves, we can reach all its adjacent positions in x+1x+1 moves. Based on this idea, we make use of a 2-D dpdp array to store the number of ways in which a particular position can be reached. dp[i][j]dp[i][j] refers to the number of ways the position corresponding to the indices (i,j)(i,j) can be reached given some particular number of moves.

Now, if the current dpdp array stores the number of ways the various positions can be reached by making use of x-1x−1 moves, in order to determine the number of ways the position (i,j)(i,j) can be reached by making use of xx moves, we need to update the corresponding dpdp entry as dp[i][j] = dp[i-1][j] + dp[i+1][j] + dp[i][j-1] + dp[i][j+1]dp[i][j]=dp[i−1][j]+dp[i+1][j]+dp[i][j−1]+dp[i][j+1] taking care of boundary conditions. This happens because we can reach the index (i,j)(i,j) from any of the four adjacent positions and the total number of ways of reaching the index (i,j)(i,j) in xx moves is the sum of the ways of reaching the adjacent positions in x-1x−1 moves.

But, if we alter the dpdp array, now some of the entries will correspond to x-1x−1 moves and the updated ones will correspond to xx moves. Thus, we need to find a way to tackle this issue. So, instead of updating the dpdp array for the current(xx) moves, we make use of a temporary 2-D array temptemp to store the updated results for xx moves, making use of the results obtained for dpdp array corresponding to x-1x−1 moves. After all the entries for all the positions have been considered for xx moves, we update the dpdp array based on temptemp. Thus, dpdp now contains the entries corresponding to xx moves.

Thus, we start off by considering zero move available for which we make an initial entry of dp[x][y] = 1dp[x][y]=1((x,y)(x,y) is the initial position), since we can reach only this position in zero move. Then, we increase the number of moves to 1 and update all the dpdp entries appropriately. We do so for all the moves possible from 1 to N.

In order to update countcount, which indicates the total number of possible moves which lead an out of boundary path, we need to perform the update only when we reach the boundary. We update the count as count = count + dp[i][j]count=count+dp[i][j], where (i,j)(i,j) corresponds to one of the boundaries. But, if (i,j)(i,j) is simultaneously a part of multiple boundaries, we need to add the dp[i][j]dp[i][j] factor multiple times(same as the number of boundaries to which (i,j)(i,j) belongs).

After we are done with all the NN moves, countcount gives the required result.
