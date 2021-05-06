std::string highAndLow(const std::string& numbers){
 int max= -2147483643; 
  int min= 2147483643;
  int temp;
  std::stringstream ss(numbers); 
  while(ss>>temp)
  {
  if(temp<min) min=temp;
  if(temp>max) max=temp;
  }
  return std::to_string(max)+" "+ std::to_string(min);
}
