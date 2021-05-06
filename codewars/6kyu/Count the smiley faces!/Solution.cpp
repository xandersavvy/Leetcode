int countSmileys(std::vector<std::string> arr)
{
  int count=0;
  for(auto s:arr)
    if(s.size()<3){
    if((int)s[0]==58||(int)s[0]==59)
    if((int)s[1]==68||(int)s[1]==41)
      count++;
  }else if(s.size()==3){
      if((int)s[0]==58||(int)s[0]==59)
      if((int)s[1]==45||(int)s[1]==126)
      if((int)s[2]==68||(int)s[2]==41)
      count++;
    }
  
  return count;
}
