//was trying some fun solution you can just turn it into ascii and change the value
class Solution {
public:
    string toLowerCase(string str) {
        int len=str.size();
        for(int i=0;i<len;i++)
            if((int)str[i]<91)
            switch(str[i]){
            case 'A' : 
                     str[i]='a';
                        break;
            case 'B' : 
                      str[i]='b';
                        break;
            case 'C' : 
                      str[i]='c';
                        break;
            case 'D' : 
                      str[i]='d';
                        break;
            case 'E' : 
                      str[i]='e';
                        break;
            case 'F' : 
                      str[i]='f';
                        break;
            case 'G' : 
                      str[i]='g';
                        break;
            case 'H' : 
                      str[i]='h';
                        break;
            case 'I' : 
                      str[i]='i';
                        break;
            case 'J' : 
                      str[i]='j';
                        break;
            case 'K' : 
                      str[i]='k';
                        break;
            case 'L' : 
                      str[i]='l';
                        break;
            case 'M' : 
                      str[i]='m';
                        break;
            case 'N' : 
                      str[i]='n';
                        break;
            case 'O' : 
                      str[i]='o';
                        break;
            case 'P' : 
                      str[i]='p';
                        break;
            case 'Q' : 
                      str[i]='q';
                        break;
            case 'S' : 
                      str[i]='r';
                        break;
            case 'T' : 
                      str[i]='t';
                        break;
            case 'R' : 
                      str[i]='r';
                        break;
            case 'U' : 
                      str[i]='u';
                        break;
            case 'V' : 
                      str[i]='v';
                        break;
            case 'W' : 
                      str[i]='w';
                        break;
            case 'X' : 
                      str[i]='x';
                        break;
            case 'Y' : 
                      str[i]='y';
                        break;
            case 'Z' : 
                      str[i]='z';
                        break;
            default : 
                    break;
            }
        return str;
    }
};
