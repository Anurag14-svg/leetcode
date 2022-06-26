class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> pad = {"", "" , "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.length() == 0) return {};
        vector<string> ans;
        ans.push_back("");
        
        for(auto digit : digits){
            vector<string> temp;
            for(auto letters : pad[digit - '0']){
                for(auto it : ans){
                    temp.push_back(it + letters);
                }
            }
            
            ans.swap(temp);
        }
        
        return ans;
    }
};