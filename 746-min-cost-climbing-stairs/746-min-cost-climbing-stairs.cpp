class Solution {
public:
    int f(int n , vector<int>& cost , vector<int>& dp){
        // if(n < 0) return 0;
        if( n <= 1) return cost[n];
        if(dp[n] != -1) return dp[n];
        int first = f(n -2 , cost , dp);
        int second = f(n -1 , cost , dp);
        
        return dp[n] = cost[n] + min(first , second);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n , - 1);
        return min(f(n -1 , cost , dp) , f(n -2 , cost , dp));
        
    }
};