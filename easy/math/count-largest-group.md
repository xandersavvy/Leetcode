# Count Largest Group

You are given an integer n.Each number from 1 to n is grouped according to the sum of its digits.Return the number of groups that have the largest size.

## Example 1:

    Input: n = 13   
    Output: 4
    Explanation: There are 9 groups in total, they are grouped according sum of its digits of numbers from 1 to 13:
    [1,10], [2,11], [3,12], [4,13], [5], [6], [7], [8], [9].
    There are 4 groups with largest size.
## Example 2:

    Input: n = 2
    Output: 2
    Explanation: There are 2 groups [1], [2] of size 1.
 
# Solutions

```cpp
class Solution {
public:
    int countLargestGroup(int n) {
        int arr[37]={0};
        int count=0;
        int max=0;
        for(int i=1,sum=0;i<=n;i++,sum=0){
            int temp=i;
            while(temp){
                sum+=(temp%10);
                temp/=10;
            }
            arr[sum]++;
            if(arr[sum]>max){
                max=arr[sum];
                count=1;
            }else if(arr[sum]==max) count++;
        }
        return count;
    }
};
```