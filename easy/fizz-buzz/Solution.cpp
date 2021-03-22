class Solution {
public:
    vector<string> fizzBuzz(int n) {
        if(n<2)
            return {"1"};
        if(n<3)
            return {"1","2"};
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
