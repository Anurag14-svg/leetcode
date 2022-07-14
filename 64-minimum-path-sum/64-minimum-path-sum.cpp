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
        
        // Memoization & tabulation dp array
        
        // vector<vector<int>> dp(row , vector<int>(col , -1));
        
        // space optimised dp array
        vector<int> dp(col , 0);
        
        // Memoization function call
        // return helper(grid , row - 1 , col - 1 , dp);
        
        for(int i = 0 ; i < row ; i++){
            vector<int> temp(col , 0);
            for(int  j = 0 ; j < col ; j++){
                if(i == 0 && j == 0) temp[j] = grid[i][j];
                
                else{
                    int up = INT_MAX;
                    int left = INT_MAX;
                    
                    if(i > 0) up = dp[j];
                    if(j > 0) left = temp[j-1];
                    
                    temp[j] = grid[i][j] + min(up , left);
                }
            }
            
            dp = temp;
        }
        
        return dp[col -1];
    }
};