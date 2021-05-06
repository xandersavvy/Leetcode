#include<cmath>
#include<string>  
class DigPow
{
public:
  static int digPow(int n, int p){
    int sum=0;
    int a=n;
    if(n==0) return 1;
    int len = std::to_string(n).size();
    p+=len;
    std::cout<<n;
    while(n!=0 && p>0){
      p--;
      sum+=pow((n%10),p);
      n/=10;
    }
    return (sum%a==0)?(sum/a):-1;
  }
};
