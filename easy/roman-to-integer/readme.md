
# Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
```
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
```
#### Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:
#### For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.
#### Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

    I can be placed before V (5) and X (10) to make 4 and 9. 
    X can be placed before L (50) and C (100) to make 40 and 90. 
    C can be placed before D (500) and M (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer.

 

#### Example 1:

Input: s = "III"
Output: 3

#### Example 2:

Input: s = "IV"
Output: 4

#### Example 3:

Input: s = "IX"
Output: 9

#### Example 4:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.

#### Example 5:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

## Solutions
by me 
```cpp
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0,len = s.size(),i=-1;
        unordered_map<char, int> T = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
        while (++i < len-1)
        if (T[s[i]] < T[s[i+1]]) sum+= (T[s[++i]] - T[s[i-1]]);
        else sum+= T[s[i]];
        return (i == len - 1)?sum+T[s[i]]:sum;
        
    }
};
```
### Best solution according to leetcode
```cpp
  class Solution {
public:
    int convertRomanToString(char letter)
    {
    //I personally  prefer switch case bt that's what op submitted 
        if (letter == 'I')
            return 1;

        if (letter == 'V')
            return 5;
        
        if (letter == 'X')
            return 10;
        
        if (letter == 'L')
            return 50;
        
        if (letter == 'C')
            return 100;
        
        if (letter == 'D')
            return 500;
        
        return 1000;
    }
    
    int romanToInt(string s)
    {
        int current, next, _sum = 0, _temp;

        for (int i = 0; i < s.size(); i++)
        {
            if (i != s.size() - 1) {
                current = convertRomanToString(s[i]); 
                next = convertRomanToString(s[i+1]); 

                if (current < next) {
                    _temp = next - current;
                    i++;
                } else {
                    _temp = current;
                }
            } else {
                current = convertRomanToString(s[i]); 
                _temp = current;
            }
            
            _sum += _temp;
        }
        
        return _sum;
    }
};
```
