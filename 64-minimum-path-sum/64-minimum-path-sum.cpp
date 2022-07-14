class Solution {
public:
    // Memoization
    int helper(vector<vector<int>>& grid , int row , int col ,vector<vector<int>>& dp){
        if(row == 0 && col == 0){
            return grid[0][0];
        }
        
        if(row < 0 || col < 0) return INT_MAX;
        
        if(dp[row][col] != -1) return dp[row][col];
        
        return dp[row][col] = grid[row][col] + min(helper(grid , row - 1 , col ,dp) , helper(grid , row , col-1 , dp));
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        vector<vector<int>> dp(row , vector<int>(col , -1));
        
        // Memoization function call
        // return helper(grid , row - 1 , col - 1 , dp);
        
        for(int i = 0 ; i < row ; i++){
            for(int  j = 0 ; j < col ; j++){
                if(i == 0 && j == 0) dp[i][j] = grid[i][j];
                
                else{
                    int up = INT_MAX;
                    int left = INT_MAX;
                    
                    if(i > 0) up = dp[i-1][j];
                    if(j > 0) left = dp[i][j-1];
                    
                    dp[i][j] = grid[i][j] + min(up , left);
                }
            }
        }
        
        return dp[row - 1][col -1];
    }
};