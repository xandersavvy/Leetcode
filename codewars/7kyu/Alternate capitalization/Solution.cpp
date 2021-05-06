#include <string>
#include <utility>

std::pair<std::string, std::string> capitalize(const std::string &s)
{
    std::string evenCap;
    std::string oddCap;
    for(int i=0;i<s.size();i++){
      if(i%2==0) {
        evenCap.push_back(toupper(s[i]));
        oddCap.push_back(s[i]);
    }else{
        oddCap.push_back(toupper(s[i]));
        evenCap.push_back(s[i]);
      }
    }
    return {evenCap, oddCap};
}
