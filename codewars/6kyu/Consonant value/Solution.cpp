#include <string>

int solve(const std::string &s)
{
    int max=0;
    int sum=0;
    for(char i:s){
      if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
        if(sum>max) max=sum; 
        sum=0;
      }else{
      sum+=(i-'`'); // value before lower a in ascii `
      }
    }
    return (sum>max)?sum:max;
}
