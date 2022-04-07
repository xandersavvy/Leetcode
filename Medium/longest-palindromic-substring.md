# Longest Palindromic Substring
Given a string s, return the longest palindromic substring in s.

#### Example 1:

    Input: s = "babad"
    Output: "bab"
    Note: "aba" is also a valid answer.

#### Example 2:

    Input: s = "cbbd" 
    Output: "bb"

#### Example 3:

    Input: s = "a"
    Output: "a"

#### Example 4:

    Input: s = "ac"
    Output: "a"

 

#### Constraints:

    1 <= s.length <= 1000
    s consist of only digits and English letters (lower-case and/or upper-case),

# Solutions

```cpp
class Solution {
public:
    string longestPalindrome(string s)
    {
    int r_ptr,l_ptr; // initialize left and write pointer for pallindrome
    int last_idx = s.size()-1; //get the last index
    if(last_idx==0) return s; // if the last indes is 0 [so, the length is 1] return the array
    int max_len = 0; // initialize max length
    int start_idx = 0; // initialize start index
        
    for(int i = 0;i <= last_idx;){ // initialize i and condition i to go maximum to last index
        r_ptr = i; //initialize i to right pointer 
        l_ptr = i; // initialize i to left pointer
        for(;r_ptr < last_idx && s[r_ptr] == s[r_ptr + 1];r_ptr++); // now increasing right pointer only if the current value and upcoming value is same making it a pallindrome detector 
        i = r_ptr+1; //here we are incrementing i but if we get a same characters palllindrome after s[i]'s pos in array. we need not to make substring for that array so increased right pointer will do this for us 
        for(;r_ptr < last_idx && l_ptr && s[r_ptr + 1]==s[l_ptr-1];r_ptr++ , l_ptr--); //now we have left pointer and right pointer we are expanding them if we find it pallindrome
        if((r_ptr - l_ptr) > max_len) { // if the length of the [right pointer value - left pointer value] is > max
            start_idx = l_ptr; 
            max_len = (r_ptr - l_ptr);//now start_idx will be initialized as l_ptr and length will be initialized to max_len
        }
        
    }
    return s.substr(start_idx, ++max_len); // we have start position (start_idx ) we have max_len but  max_len is less than 1 as array start form 0 so we're pre incrementing it .
    }
};

```