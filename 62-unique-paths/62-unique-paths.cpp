class Solution {
    
public:
//     Recurrsion
    
//     int helper(int m , int n){
//         if(m == 0 && n == 0) return 1;
//         if(m < 0 || n < 0) return 0;
        
//         int up = helper(m - 1, n);
//         int right = helper(m , n -1);
        
//         return up + right;
//     }
    
//     int uniquePaths(int m, int n) {
//         // return paths(0 , 0 ,m ,n);
//         return helper(m - 1, n -1);
//     }
    
    
int helper(int m , int n, vector<vector<int>> &dp){
        if(m == 0 && n == 0) return 1;
        if(m < 0 || n < 0) return 0;
    
        if(dp[m][n] != -1) return dp[m][n];
        
        int up = helper(m - 1, n, dp);
        int right = helper(m , n -1, dp);
        
        return dp[m][n] = up + right;
    }
    
    int uniquePaths(int m, int n) {
        // return paths(0 , 0 ,m ,n);
        vector<vector<int>> dp(m , vector<int> (n , -1));
        return helper(m - 1, n -1, dp);
   }
    
    
//     int uniquePaths(int m, int n) {
//         // return paths(0 , 0 ,m ,n);
//         // Recurrsion
//         // return helper(m - 1, n -1);
        
        
//     }
};