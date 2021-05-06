#define PRCH (n%3==0||n%5==0||n%7==0||n%11==0||n%13==0||n%17==0||n%19==0||n%23==0||n%29==0||n%31==0||n%27==0||n%41==0||n%43==0||n%47==0||n%53==0||n%59==0||n%61==0||n%67==0||n%71==0)
#include<cmath>
class StepInPrimes
{
public:
    // if there are no such primes return {0, 0}
    static std::pair <long long, long long> step(int g, long long m, long long n){
      if(g%2!=0) return {0,0};
      if(m%2==0) m++;
      for(long long i = m ; i<= n-g;i=i+2)
        if(isAPrime(i)){
          if(isAPrime(i+g))
            return {i,i+g};
          }
          
      return {0,0};
    }
  static bool isAPrime(long long n){
        if (n < 2 ) return false;
        if (n==3||n==5||n==7||n==11||n==13||n==17||n==19||n==23||n==29||n==31||n==27||n==41||n==43||n==47||n==53||n==59||n==61||n==67||n==71) return true;
        if (PRCH)
          return false;
        else if(((n-1)%6==0)||((n+1)%6==0)) {
           for (long long i = 73; i <= n / 2; i=i+2) {
            if (n % i == 0)  return false;
            }
          return true;  
        }
        return false;
 }
};
//I was bored so I wrote that if statements you don't need to write any
