# Longest Palindrome

#### Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters. Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

#### Example 1:
````
Input: s = "abccccdd"
Output: 7
Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.
````
##### Example 2:
````
Input: s = "a"
Output: 1
````
##### Example 3:
````
Input: s = "bb"
Output: 2
````
##### Constraints:

    1 <= s.length <= 2000
    s consists of lowercase and/or uppercase English letters only.


# Solutions

```cpp
class Solution {
public:
    int longestPalindrome(string s){
        int len=s.size();
        bool ch[123]{false};
        int count=0;
        for(int i=0;i<len;i++)
            if(!ch[(int)s[i]]) {
                count += count(s.begin(),s.end(),s[i]);
                if(count%2!=0)  {
                    count--;
                    ch[0]=true;// as we won't be encounter ch[0] we can use it as our extra variable
                }
                ch[(int)s[i]] = true;
            }
        return (ch[0])?++count:count;
    }
};

```