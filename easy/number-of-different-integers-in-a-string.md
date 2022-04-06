# Number of Different Integers in a String

#### You are given a string word that consists of digits and lowercase English letters.

#### You will replace every non-digit character with a space. For example, "a123bc34d8ef34" will become " 123  34 8  34". Notice that you are left with some integers that are separated by at least one space: "123", "34", "8", and "34".

#### Return the number of different integers after performing the replacement operations on word.

#### Two integers are considered different if their decimal representations without any leading zeros are different.


#### Example 1:

    Input: word = "a123bc34d8ef34"
    Output: 3
    Explanation: The three different integers are "123", "34", and "8". Notice that "34" is only counted once.


#### Example 2:

    Input: word = "leet1234code234"
    Output: 2


#### Example 3:

    Input: word = "a1b01c001"
    Output: 1
    Explanation: The three integers "1", "01", and "001" all represent the same integer because the leading zeros are ignored when comparing their decimal values.

 


#### Constraints:

    1 <= word.length <= 1000
    word consists of digits and lowercase English letters.

# Solutions

```cpp
class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string> st{};
        bool fl = false;
        string num="";
        int len= word.size();
        if(len==1) return(isdigit(word[0]))?1:0;
        else {
        for(int i=0;i<len;i++) 
            if(isdigit(word[i])){
                while(word[i]=='0') { fl=true; i++; }
                int j =  0;
                while(isdigit(word[i+j])&&(i+j)<len) j++;
                if(!j&&fl) st.insert("0"); //if the number is 0;
                else st.insert(word.substr(i,j));
                i+=j;
                fl = false;
            }
        }
        return st.size();
    }
};

```