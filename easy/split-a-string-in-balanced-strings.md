### Balanced strings are those that have an equal quantity of 'L' and 'R' characters.Given a balanced string s, split it in the maximum amount of balanced strings.

### Return the maximum amount of split balanced strings.

 

##### Example 1:
````
Input: s = "RLRRLLRLRL"
Output: 4
````
Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.
##### Example 2:
````
Input: s = "RLLLLRRRLR"
Output: 3
````
Explanation: s can be split into "RL", "LLLRRR", "LR", each substring contains same number of 'L' and 'R'.
##### Example 3:
````
Input: s = "LLLLRRRR"
Output: 1
````
Explanation: s can be split into "LLLLRRRR".
##### Example 4:
```
Input: s = "RLRRRLLRLL"
Output: 2
```
Explanation: s can be split into "RL", "RRRLLRLL", since each substring contains an equal number of 'L' and 'R'
 

##### Constraints:
```
1 <= s.length <= 1000
s[i] is either 'L' or 'R'.
s is a balanced string.
```
# Solutions

```cpp
class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0;
         int ans = 0;
         for(int i =0;i<s.size();i++){
            cnt = 0;
            for(int j = i;j<s.size();j++){
               if(s[j] == 'R')cnt++;
               else cnt--;
               if(j-i>0 && cnt == 0 ){
                  ans++;
                  i=j;
                  break;
               }
            }
         }
         return ans;
    }
};

```