# Count Square Sum Triples

A square triple (a,b,c) is a triple where a, b, and c are integers and a2 + b2 = c2.Given an integer n, return the number of square triples such that 1 <= a, b, c <= n.

## Example 1:

    Input: n = 5
    Output: 2
    Explanation: The square triples are (3,4,5) and (4,3,5).
## Example 2:

    Input: n = 10
    Output: 4
    Explanation: The square triples are (3,4,5), (4,3,5), (6,8,10), and (8,6,10).
 

## Constraints:

    1 <= n <= 250

# Solutions

```cpp
class Solution {
public:
    int countTriples(int n) {
        bool arr[(n*n)+1];
        int count=0;
        memset(arr,false,((n*n)+1)*sizeof(bool));

        for(int i=1;i<=n;i++) arr[i*i]=true;
        
        for(int i=1;i<n;i++){
            for(int j=i+1;(i*i+j*j<=n*n)&&(j<n);j++){
                if(arr[i*i+j*j]) count+=2;
            }
        }
        
        return count;
    }
};
```