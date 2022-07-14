class Solution {
public:
    int ans(vector<vector<int>>& obstacleGrid , int row , int col, vector<vector<int>>& dp){
        if(row < 0 || col < 0) return 0;
        if(obstacleGrid[row][col] == 1) return 0;
        if(row == 0 && col == 0) return 1;
        
        if(dp[row][col] != -1) return dp[row][col];
        
        return dp[row][col] = ans(obstacleGrid , row - 1 , col, dp) + ans(obstacleGrid, row , col - 1,dp);
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();
        vector<vector<int>> dp(row , vector<int>(col , -1));
        
        return ans(obstacleGrid , row-1 , col-1, dp);
    }
};