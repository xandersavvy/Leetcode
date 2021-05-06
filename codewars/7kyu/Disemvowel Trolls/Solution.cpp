# include <string>
# include <cstring>

std::string disemvowel(const std::string& str) {
  std::string newString="";
  for(auto i:str)
    if(i!='A'&&i!='a'&&i!='e'&&i!='E'&&i!='i'&&i!='I'&&i!='o'&&i!='O'&&i!='u'&&i!='U') newString.push_back(i);
  return newString;
}
