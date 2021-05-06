std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
  int len = numbers.size();
  for(int i=0;i<(len-1);i++)
      for(int j=i+1;j<len;j++)
            if(numbers[i]+numbers[j]==target)
              return {i,j};

  return {0, 0};
}
