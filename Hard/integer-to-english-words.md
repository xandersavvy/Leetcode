# Integer to English Words

### Convert a non-negative integer num to its English words representation.

 

#### Example 1:

    Input: num = 123
    Output: "One Hundred Twenty Three"

#### Example 2:

    Input: num = 12345
    Output: "Twelve Thousand Three Hundred Forty Five"

#### Example 3:

    Input: num = 1234567
    Output: "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven"

#### Example 4:

    Input: num = 1234567891
    Output: "One Billion Two Hundred Thirty Four Million Five Hundred Sixty Seven Thousand Eight Hundred Ninety One"

 

#### Constraints:

    0 <= num <= 231 - 1

# Solutions

```cpp
#define THOUSANDS "Thousand","Million","Billion"
#define ONES "One","Two","Three","Four","Five","Six","Seven","Eight","Nine"
#define TENS "Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"
#define TEENS "Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"
class Solution {
public:
    string numberToWords(int num) {
        if(!num) return "Zero";
        string final_str="";
        vector<string> thsns{"",THOUSANDS};
        vector<string> on{"",ONES};
        vector<string> tns{"","",TENS};
        vector<string> teens{TEENS};
        int i=0;
        while(num){
            int ones = 0,tens=0,hunds=0;
            string str="";
            ones = num%10; 
            num/=10; 
            tens = num%10; 
            num/=10;
            if(tens==1) str = teens[ones]+" "+str;
            else
            {
	            if(ones)  str= on[ones]+ " "+str;
	            if(tens) str = tns[tens]+" "+ str;
            }            
            hunds = num%10; 
            num/=10;
            if(hunds) str = on[hunds]+" Hundred"+" "+str;
            if(i && str.size())  final_str= str+thsns[i]+" "+final_str;
            else    final_str=str+final_str;
            i++;
        }

        return final_str.substr(0,final_str.size()-1);
    }
};

```