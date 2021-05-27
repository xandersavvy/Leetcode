# Fast exponentiation

----

## Remainder implementation

N = $a*b$
N%M = ((a%m)*(b%m))%m 
where a is the number, N is it's power , M is divisior and  N/2= n , M/2 = m


### Power implementation

let's say we have to calculate $a^N$ without using any built in function , so what we can do is we can use brute force solution like:

````cpp
    int new_a=1;
    while(N--) new_a*=a;
````

but that will take **O(N)** time complexity. Other hand what we can do is we can calculate to half and multiply it that will take **O($N/2$)** time complexity. {I know about constants}

````cpp
    for(i=0;i<N/2;i++) new_a*=a;
    if(N%2==0) new_a*=new_a; //if  power is even just multiply
    else new_a*=(a*new_a) // if power is not even we will need one more a
````

Now, we can use it as a recursion . So, that it can perform much simpler.

````cpp
    int pow(int a,int N){
        if(N<2) return(N==0)?1:a; //base case
        else{
            int R = pow(a,N/2);
            return (N%2==0)?(R*R):(R*R*a);
        }
    }
````

as we don't have to calculate the halfs we can assume we have time complexity O(logN)

#### N.B. - we don't need this power often in cpp as pow()'s time complecity is O(1) for most of the hardware.
