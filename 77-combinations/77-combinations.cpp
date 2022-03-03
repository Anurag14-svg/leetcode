class Solution {
private:
    void result(int idx , vector<int> &temp, vector<vector<int>> &ans , int n, int k){
        if(temp.size() == k || idx == n){
            if(temp.size() == k) ans.push_back(temp);
            return;
        }
        
        temp.push_back(idx+1);
        result(idx+1, temp , ans, n, k);
        temp.pop_back();
        result(idx+1, temp , ans , n, k);
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        result(0 , temp , ans, n, k);
        return ans;
    }
};