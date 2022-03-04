class Solution {
    
private:
    bool isTrue(string& s , string& t){
        int j = 0;
        for(char c : s){
            if(c>='A' && c<= 'Z' && c != t[j]) return false;
            if(c == t[j]) j++;
        }
        
        return j == t.size();
    }
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;
        for(auto s : queries){
            if(isTrue(s, pattern)) ans.push_back(true);
            else ans.push_back(false);
        }
        
        return ans;
    }
};