class Solution {
public:
    string interpret(string command) {
        string interpret="";
        int len=command.size();
        for(int i=0;i<len;i++)
        {
            if(command[i]=='G')
                interpret.push_back('G');
            else if(command[i]=='(')
                continue;
            else if (command[i]==')')
                interpret.push_back('o');
            else{
                interpret.push_back('a');
                interpret.push_back('l');
                i=i+2;
            }
        }
        return interpret;
    }
};
//0 ms	6.1 MB
