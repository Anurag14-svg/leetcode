class Solution {
public:
    int helper(vector<vector<int>> &triangle , int row , int col , int end , vector<vector<int>>& dp){
        if( row == end) return triangle[row][col];
        
        if(dp[row][col] != -1) return dp[row][col];
        
        return dp[row][col] = triangle[row][col] + min(helper(triangle , row + 1 , col, end, dp), helper(triangle , row+1 , col+1 , end, dp));
    }
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int row = triangle.size();
        int max_col = triangle[row - 1].size();
        vector<vector<int>> dp(row , vector<int>(max_col , -1));
        
        return helper(triangle , 0 , 0 , row-1 , dp);
    }
};