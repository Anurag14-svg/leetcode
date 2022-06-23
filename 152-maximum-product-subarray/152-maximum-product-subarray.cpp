class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product = 1 ;
        int maxi = INT_MIN;
        
        for(auto it : nums){
            product *= it;
            maxi = max(maxi , product);
            if(product == 0) product = 1;
        }
        
         product = 1;
        
        for(int i = nums.size() - 1 ; i>= 0 ;i--){
            product *= nums[i];
            maxi = max(maxi , product);
            if(product == 0) product = 1;
        }
        
        return maxi;
    }
};