class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxCount = 0;
        int maxLen = 0;
        
        int l =0 , r =0, n = s.length();
        unordered_map<int , int> mp;
        while(r < n){
            mp[s[r] - 'A']++;
            maxLen = max(maxLen , mp[s[r] - 'A']);
            
            if((r - l + 1) - maxLen > k){
                mp[s[l] - 'A']--;
                l++;
            } 
            
            maxCount = max(maxCount , r - l + 1);
            r++;
            
        }
        
        return maxCount;
    }
};