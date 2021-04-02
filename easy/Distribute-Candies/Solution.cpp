class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int max_candy=(candyType.size()/2);
        set<int, greater<int> > uniqueCandies; 
        for(int i:candyType)
         uniqueCandies.insert(i);
        return (uniqueCandies.size()>max_candy)?max_candy:uniqueCandies.size();
    }
};
