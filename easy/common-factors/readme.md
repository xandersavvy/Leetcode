# Little Shino and Common factors
### Little Shino loves maths. Today her teacher gave her two integers. Shino is now wondering how many integers can divide both the numbers. She is busy with her assignments. Help her to solve the problem.

Input:
    First line of the input file contains two integers, a and b.

Output:
    Print the number of common factors of a and b.

Constraints:

1<=a,b<=10^12

SAMPLE INPUT 
    10 15
SAMPLE OUTPUT 
    2
Explanation
    The common factors of  and  are 1 and 5.

# Solution

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b)
{
    return (b)?gcd(b, a%b):a;
}

long long no_of_factors(long long n)
{
	if(n==1) return 1;
    int count = 2;
	long long i=2;
    while(n>(i*i)) {
        if(!(n%i)) count+=2;
		i++;
    }
    return (n/i==i)?count+1:count;
}

int main(){
    long long a, b;
	cin >> a >> b;
	cout << no_of_factors(gcd(max(a, b), min(a, b)));
	return 0;
}
```