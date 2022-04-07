# Determine if String Halves Are Alike

#### You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half. Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.
#### Return true if a and b are alike. Otherwise, return false.

 

##### Example 1:
````
Input: s = "book"
Output: true
````
Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.

##### Example 2:
````
Input: s = "textbook"
Output: false
````
Explanation: a = "text" and b = "book". a has 1 vowel whereas b has 2. Therefore, they are not alike.
Notice that the vowel o is counted twice.

##### Example 3:
````
Input: s = "MerryChristmas"
Output: false
````
##### Example 4:
````
Input: s = "AbCdEfGh"
Output: true
````
 

Constraints:

    2 <= s.length <= 1000
    s.length is even.
    s consists of uppercase and lowercase letters.

# Solutions 

```cpp
class Solution {
public:
    bool vowel(char a){
        int v[]={97,101,105,111,117};
        for(int i=0;i<5;i++){
            if(tolower(a)==v[i]) return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int count=0;
        int len = s.size();
        for(int i=0;i<len;i++) if(vowel(s[i])) count+=(i>=len/2)?(-1):(1);
        return !count;
    }
};

```