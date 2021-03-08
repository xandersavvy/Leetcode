class Solution {
public:
    string defangIPaddr(string address) {
        string defangIP = ""; 
      
    for (char c : address) 
        (c == '.') ? defangIP += "[.]" :  
                     defangIP += c; 
    return defangIP; 
        
    }
};
// runtime -0 ms Memory - 5.9 mb
