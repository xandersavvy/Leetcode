class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        encoded.insert(encoded.begin(), first); 
        int len = encoded.size(); 
        for (int i =1; i <len; i++) 
            encoded[i]=encoded[i]^encoded[i-1];
        return encoded;
  
    }
};
