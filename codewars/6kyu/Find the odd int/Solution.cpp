#include <vector>

int findOdd(const std::vector<int>& numbers){
  int tempC=0;
  for(int i:numbers){
    tempC = count(numbers.begin(), numbers.end(), i);
    if(tempC%2!=0){
      return i;
    };
      
  }
    //your code here
}
