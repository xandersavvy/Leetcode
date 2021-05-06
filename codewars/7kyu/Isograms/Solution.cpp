bool is_isogram(std::string str) {
    int len = str.size();
    if((int)str[0]<97)
        str[0]=(char)tolower(str[0]);
    for(int i =1 ; i<len;i++){
      if((int)str[i]<97)
        str[i]=(char)tolower(str[i]);
     std::cout<<str[i];
      for(int j=i-1;j>=0;j--){
        if(str[i]==str[j])
          return false;
      }
    }
  return true;
}
