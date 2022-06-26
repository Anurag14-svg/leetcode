class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> temp;
        
        for(auto it : strs){
            string t = it;
            sort(t.begin() , t.end());
            temp[t].push_back(it);
        }
        
        vector<vector<string>> ans;
        
        for(auto ut : temp){
            ans.push_back(ut.second);
        }
        
        return ans;
    }
};