## Write a program that outputs the string representation of numbers from 1 to n. But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.

##### Example:
```
n = 15,

Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]
```

# SOlution

```cpp
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        if(n<2) return {"1"};
        else if(n<3) return {"1","2"};
        vector<string> fizzBuzz={"1","2"};
        for(int i=3;i<=n;i++){
            if((i%15)==0 && i>14)
                fizzBuzz.push_back("FizzBuzz");
            else if(i%5==0 && i >4)
               fizzBuzz.push_back("Buzz");
            else if(i%3==0)
               fizzBuzz.push_back("Fizz");
            else
                fizzBuzz.push_back(to_string(i));
        }
        return fizzBuzz;
    }
};

```