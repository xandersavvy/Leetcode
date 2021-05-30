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
