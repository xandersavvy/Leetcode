# Matchsticks to Square

You are given an integer array matchsticks where matchsticks[i] is the length of the ith matchstick. You want to use all the matchsticks to make one square. You should not break any stick, but you can link them up, and each matchstick must be used exactly one time. Return true if you can make this square and false otherwise.
 
Example 1:

    Input: matchsticks = [1,1,2,2,2]
    Output: true

Explanation: You can form a square with length 2, one side of the square came two sticks with length 1.

Example 2:

    Input: matchsticks = [3,3,3,3,4]
    Output: false

Explanation: You cannot find a way to form a square with all the matchsticks.
 
Constraints:

- 1 <= matchsticks.length <= 15
- 1 <= matchsticks[i] <= 108

# Solutions
This one is in java 

Explanation - https://leetcode.com/problems/matchsticks-to-square/discuss/95729/Java-DFS-Solution-with-Explanation

```java
class Solution {
    //DFS without reversing the array
    public boolean makesquare(int[] matchsticks) {
        int perimeter = 0;
        for (int stick : matchsticks) {
            perimeter += stick;
        }
        //check perimeter is valid or not
        if (perimeter % 4 != 0) {
            return false;
        }
        //sort the stick in ascending order by their lengths
        Arrays.sort(matchsticks);
        //this function returns all sticks can be
        return dfs(matchsticks, new int[4], matchsticks.length - 1, perimeter / 4);
    }

    boolean dfs(int[] matchsticks, int[] sides, int index, int squareSide) {
        if (index == -1) {
            return true;
        }
        for (int i = 0; i < 4; i++) {
            //ignore this side if add new stick will greater than valid square side
            if (sides[i] + matchsticks[index] > squareSide || i > 0 && sides[i] == sides[i - 1]) {
                continue;
            }
            //add stick in current side
            sides[i] += matchsticks[index];
            //check square can be formed or not, just return from, no need to try different combination of stick for sides
            if (dfs(matchsticks, sides, index - 1, squareSide)) {
                return true;
            }
            //remove stick from current side
            sides[i] -= matchsticks[index];
        }
        return false;
    }
}

```