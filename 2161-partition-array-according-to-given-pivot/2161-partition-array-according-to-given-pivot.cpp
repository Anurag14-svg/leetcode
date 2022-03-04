class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        for(auto n : nums){
            if(n < pivot) ans.push_back(n);
        }
        
        for(auto m : nums){
            if(m == pivot) ans.push_back(m);
        }
        
        for(auto o : nums){
            if(o > pivot) ans.push_back(o);
        }
        
        return ans;
    }
};