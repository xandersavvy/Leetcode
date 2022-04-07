## You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.
 

##### Example 1:
```
Input: command = "G()(al)"
Output: "Goal"
```
Explanation: The Goal Parser interprets the command as follows:
G -> G
() -> o
(al) -> al
The final concatenated result is "Goal".
##### Example 2:
```
Input: command = "G()()()()(al)"
Output: "Gooooal"
```
##### Example 3:
```
Input: command = "(al)G(al)()()G"
Output: "alGalooG"
 ```

##### Constraints:
```
1 <= command.length <= 100
command consists of "G", "()", and/or "(al)" in some order.
```
# Solution

```cpp
class Solution {
public:
    string interpret(string command) {
        string interpret="";
        int len=command.size();
        for(int i=0;i<len;i++)
        {
            if(command[i]=='G')
                interpret.push_back('G');
            else if(command[i]=='(')
                continue;
            else if (command[i]==')')
                interpret.push_back('o');
            else{
                interpret.push_back('a');
                interpret.push_back('l');
                i=i+2;
            }
        }
        return interpret;
    }
};

```