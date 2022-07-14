class Solution {
public:
//     int ans(vector<vector<int>>& obstacleGrid , int row , int col, vector<vector<int>>& dp){
//         if(row < 0 || col < 0) return 0;
//         if(obstacleGrid[row][col] == 1) return 0;
//         if(row == 0 && col == 0) return 1;
        
//         if(dp[row][col] != -1) return dp[row][col];
        
//         return dp[row][col] = ans(obstacleGrid , row - 1 , col, dp) + ans(obstacleGrid, row , col - 1,dp);
//     }
    
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int row = obstacleGrid.size();
//         int col = obstacleGrid[0].size();
//         vector<vector<int>> dp(row , vector<int>(col , -1));
        
//         return ans(obstacleGrid , row-1 , col-1, dp);
//     }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();
        
        if(obstacleGrid[0][0] == 1) return 0;
        vector<vector<int>> dp(row , vector<int>(col , 0));
        
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ;j < col ; j++){
               
                if(i == 0 && j == 0) dp[i][j] = 1;
                else if(obstacleGrid[i][j] == 1) dp[i][j] = 0;
                else {
                     int up = 0;
                     int left = 0;
                    if(i > 0) up = dp[i-1][j];
                    if(j > 0) left = dp[i][j-1];
                    
                    dp[i][j] = up + left;
                }
            }
        }
        
        return dp[row-1][col-1];
    }
};