# Dynamic Programmming 
### Dynamic Programming is essentially a enhanced recursion, where we sacrifice memory for runtime optimization
In Dynamic Programming we store all the result that has already been got . So, we don't have to recalculate  it.
#### USE CASES :
``` primarily recursion where we have more than one recursive call and/or we have to find  optimal result , we use Dynamic Programming There. ```
There is two type of Dynamic Programming 
 - Memoization / Top Down Approach
 - Tabulation / Bottom Up Approach

#### Memoization
  In memoization when recursion occurs we check if we have the value already stored in the memory if it isn't already stored in the memory we first store it to the memory .
  then return this for further recursion/functions. We tend to check  it from the top of the tree alike structure to the bottom of the structure. 
  **But we still perform recursion here and though we cut down significant amount of recursive call still it might cause stack overflow**
 
#### Tabulation  
  Using Tabulation we can overcome this stack overflow problem as it doesn't do recursive calls at all . In tabulation we use loops instead of recursion.
  Tabulationn uses Matrix alike structure where it fills the position with the base cases and from 0 to N going on for fillling position.
  It also store the resullt once found so that it doesn't have to find more than once . That's why it is called Bottom Up approach .
 

