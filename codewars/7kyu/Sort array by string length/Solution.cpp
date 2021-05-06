class Kata
{
public:
    std::vector<std::string> sortByLength(std::vector<std::string> array)
    {
      int n = array.size();
      std::string temp="";
      
    for (int i = 0; i < n-1; i++)     
      for (int j = 0; j < n-i-1; j++) 
        if (array[j].size() > array[j+1].size()) 
            {
            temp = array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            temp="";
        }
        return array;
    }
};
