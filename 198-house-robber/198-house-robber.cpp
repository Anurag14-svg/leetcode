class Solution {
public:
    
//     int ans(int n , vector<int>& nums, vector<int>& dp){
//         if( n == 0) return nums[0];
        
//         if( n < 0) return 0;
        
        
        
//         if(dp[n] != -1) return dp[n];
        
        
//         int pick = nums[n] + ans(n -2, nums , dp );
// 
        
//         int notPick = ans(n - 1, nums ,dp);
        
        
        
//         return dp[n] = max(pick , notPick);
//     }
    
    int rob(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> dp(n , -1);
//         dp[0] = nums[0];
//         int i;
        
//         for(i = 1; i < n; i++){
//             int pick = nums[i];
//             if(i > 1) pick += dp[i-2];
        
//             int notPick = dp[i-1];
            
//             dp[i] = max(pick , nonPick);
//         }
        
//         return dp[n - 1];
        
        int n = nums.size();
        int prev = nums[0];
        int prev2= 0;
        
        for(int i = 0 ; i < n; i++){
            int pick = nums[i] ;
            if(i > 1) pick += prev2;
            int notPick = prev;
            
            int curr = max(pick , notPick);
            
            prev2 = prev;
            prev = curr;
         }
        
        return prev;
        
        
    }
};