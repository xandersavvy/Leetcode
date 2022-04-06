# Set Mismatch

##### You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.
##### You are given an integer array nums representing the data status of this set after the error.Find the number that occurs twice and the number that is missing and return them in the form of an array.

 

##### Example 1:
````
Input: nums = [1,2,2,4]
Output: [2,3]
````
##### Example 2:
````
Input: nums = [1,1]
Output: [1,2]
````
 

##### Constraints:

    2 <= nums.length <= 104
    1 <= nums[i] <= 104

# Solutions

```cpp
class Solution {
public:
    vector<int> findErrorNums(vector<int>& A) {
      vector<int> v(2);
      long long int s1 = accumulate(A.begin(), A.end(), 0);
      int n = A.size();
      long long int exp_sum = (n * (n + 1)) / 2;
      for (int i = 0; i < n; i++) {
         if (A[abs(A[i]) - 1] > 0) {
            A[abs(A[i]) - 1] = -A[abs(A[i]) - 1];
         }
         else {
            v[0] = abs(A[i]);
         break;
         }
      }
      v[1] = v[0] - (s1 - exp_sum);
      return v;
    }
};

```