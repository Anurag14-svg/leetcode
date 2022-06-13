class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        int n = nums.size();
        int product = 1;
        
        for(int i = 0 ; i < n ;i++){
            product *= nums[i];
            output.push_back(product);
            
        }
        
        product = 1;
        for(int i = n - 1 ; i > 0 ; i--){
            output[i] = output[i-1] * product;
            product *= nums[i];
        }
        
        output[0] = product;
        
        return output;
    }
};