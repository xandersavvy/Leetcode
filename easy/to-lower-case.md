##### Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.

 

##### Example 1:
````
Input: "Hello"
Output: "hello"
````
##### Example 2:
````
Input: "here"
Output: "here"
````
##### Example 3:
````
Input: "LOVELY"
Output: "lovely"
````
# Soluton

```cpp
class Solution {
public:
    string toLowerCase(string s) {
        int len = s.size();
        for(int i=0;i<len;i++) 
            if((s[i]-'A'>=0) && (s[i]-'Z'<1)) s[i]+=32;
        return s;
    }
};
```