class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int , bool> mp;
        for(auto it : nums){
            mp[it] = true;
        }
        
        for(auto it : nums){
            if(mp.find(it-1) != mp.end()){
                mp[it] = false;
            }
        }
        
        int ans = 0;
        
        for(auto it : nums){
            if(mp[it] == true){
                int len = 1;
                
                while(mp.find(it + len) != mp.end()){
                    len++;
                    
                }
                ans = max(ans , len);
            }
        }
        
        return ans;
    }
};