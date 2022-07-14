class Solution {
public:
    // Memoization
//     int helper(vector<vector<int>> &triangle , int row , int col , int end , vector<vector<int>>& dp){
//         if( row == end) return triangle[row][col];
        
//         if(dp[row][col] != -1) return dp[row][col];
        
//         return dp[row][col] = triangle[row][col] + min(helper(triangle , row + 1 , col, end, dp), helper(triangle , row+1 , col+1 , end, dp));
//     }
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int row = triangle.size();
        
        vector<vector<int>> dp(row , vector<int>(row , -1));
        // Memoization
        // return helper(triangle , 0 , 0 , row-1 , dp);
        for(int j  = row -1; j >= 0 ; j--){
            dp[row-1][j] = triangle[row-1][j];
            
        }
        
        for(int i = row - 2; i >= 0 ;i--){
            for(int j = i ; j >= 0 ;j--){
                dp[i][j] = triangle[i][j] + min(dp[i+1][j] , dp[i+1][j+1]);
            }
        }
        
        return dp[0][0];
    }
};