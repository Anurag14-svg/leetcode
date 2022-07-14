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
        vector<int> dp(col , 0);
        
        for(int i = 0 ; i < row ; i++){
            vector<int> curr(col , 0);
            for(int j = 0 ;j < col ; j++){
               
                if(i == 0 && j == 0) curr[j] = 1;
                else if(obstacleGrid[i][j] == 1) curr[j] = 0;
                else {
                     int up = 0;
                     int left = 0;
                    if(i > 0) up = dp[j];
                    if(j > 0) left = curr[j-1];
                    
                    curr[j] = up + left;
                }
            }
            
            dp = curr;
        }
        
        return dp[col-1];
    }
};