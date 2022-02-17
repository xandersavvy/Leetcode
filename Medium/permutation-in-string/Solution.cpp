class Solution {
public:
    bool checkInclusion(string s1, string s2) {
	    vector<int> cur(26), goal(26);
	    int len1 = s1.size();
	    int len2 = s2.size();
	    for(int i = 0; i < len1; i++) goal[s1[i] - 'a']++;
	    for(int i = 0; i < len2; i++) {
		    cur[s2[i] - 'a']++;
		    if(i >= len1) cur[s2[i - len1] - 'a']--;
		    if(goal == cur) return true;
	    }
	    return false;
    }
};