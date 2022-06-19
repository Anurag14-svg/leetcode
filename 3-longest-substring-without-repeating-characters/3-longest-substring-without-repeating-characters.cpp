class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int n = s.length();
        if(n == 0) return 0;
        int max_length = INT_MIN;
        set<int> se;
        while(l < n && r < n){
            
            if(se.find(s[r]) == se.end()){
                se.insert(s[r]);
                r++;
                max_length = max(max_length , r - l );
            }
            
            else{
                se.erase(s[l]);
                l++;
            }
        }
        
        return max_length;
    }
};