# Prime Palindrome

#### Find the smallest prime palindrome greater than or equal to n. Recall that a number is prime if it's only divisors are 1 and itself, and it is greater than 1. 

#### For example, 2,3,5,7,11 and 13 are primes. Recall that a number is a palindrome if it reads the same from left to right as it does from right to left. 

#### For example, 12321 is a palindrome.

 

#### Example 1:

    Input: n = 6
    Output: 7

#### Example 2:

    Input: n = 8
    Output: 11

#### Example 3:

    Input: n = 13
    Output: 101

#### Note:

    1 <= n <= 108
    The answer is guaranteed to exist and be less than 2 * 108.


# Solutions
```cpp
class Solution {
public:
    int primePalindrome(int N) {
        if(N<=3) return(N==3)?3:2;
        if(N==11||N==10) return 11;
        if((int)floor(log10(N))%2!=0) N=pow(10,floor(log10(N))+1)+1; // as number theory except 11 every even number pallindrome is divisible bby 11
        cout<<N;
        while (true) {
            if(N%2==0) N++;
            if (isPallindrome(N) && isPrime(N)) return N;
            N++;
            if (10000000 < N && N < 100000000) N = 100000000;
        }
    }

    bool isPrime(int N) {
        for (int d = 3; d*d <= N; d+=2)  if (N % d == 0) return false;
        return true;
    }
    bool isPallindrome(int N) {
        int ans = 0;
        int num=N;
        while (N > 0) {
            ans = 10 * ans + (N % 10);
            N /= 10;
        }
        return num==ans;
    }
};

```