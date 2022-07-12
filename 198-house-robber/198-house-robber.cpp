class Solution {
public:
    
    int ans(int n , vector<int>& nums, vector<int>& dp){
        if( n == 0) return nums[0];
        if( n == 1) return nums[1];
        if( n < 0) return 0;
        int fs = INT_MIN;
        int ss = INT_MIN;
        
        
        if(dp[n] != -1) return dp[n];
        
        
        
        
        if(n-2 >=0) fs = ans(n -2, nums, dp) + nums[n];
        if(n -3 >= 0) ss = ans(n -3, nums, dp) + nums[n];
        
        return dp[n] = max(fs , ss);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size() - 1;
        vector<int> dp(n + 1 , -1);
        int res = ans(n, nums, dp);
        int res2 = ans(n-1 , nums, dp);
        
        return max(res , res2);
    }
};