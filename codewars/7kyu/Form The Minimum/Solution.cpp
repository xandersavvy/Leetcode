#include <vector>
#include<set>
using namespace std; 

unsigned long long minValue (vector <int> values)
{
  set<int> s;
  int num=0;
  for(int i: values) s.insert(i);
  for(int j:s) num=10*num+j;
 return num ; 
}
