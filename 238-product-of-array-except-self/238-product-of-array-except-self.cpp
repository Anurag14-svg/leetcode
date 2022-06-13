class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int res = 1;
        for(auto it : nums){
            res *= it;
        }
        int temp = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                for(int j = 0 ; j < nums.size() ; j++){
                    if(j != i){
                        temp*= nums[j];
                    }
                }
                ans.push_back(temp);
            }
            else
             ans.push_back(res / nums[i]);
        }
        
        return ans;
    }
};