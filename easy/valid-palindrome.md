# Valid Palindrome

### Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

 

#### Example 1:
````
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
````
#### Example 2:
````
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
````
 

#### Constraints:
````
    1 <= s.length <= 2 * 105
    s consists only of printable ASCII characters.
````

# Solutions

```cpp
class Solution {
public:
     bool isPalindrome(string s) {
        int left=0,right=s.size()-1;
        while(left<=right){
            if(!isalnum(s[left])) left++;
            if(!isalnum(s[right])) right--;
            if(isalnum(s[left])&&isalnum(s[right])){
                 if(tolower(s[left])!=tolower(s[right]))return false;
                    left++;
                    right--;
                }
        }
        return true;
    }
}; 

```