class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        if(arr.size()<3) return 0;
        int count=0;
        for(int i=0;i<(arr.size()-2);i++)
            for(int j=i+1;j<(arr.size()-1);j++)
                if(abs(arr[i] - arr[j])<= a)
                    for(int k=j+1;k<arr.size();k++)
                        if((abs(arr[i] - arr[k])<= c) && (abs(arr[j] - arr[k])<= b))
                                    count++;
        return count;
    }
};
