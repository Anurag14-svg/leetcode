class Solution {
    
public:
//     Recurrsion -- TLE
    
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
    
    
// Memoization -- Accepted
    
// int helper(int m , int n, vector<vector<int>> &dp){
//         if(m == 0 && n == 0) return 1;
//         if(m < 0 || n < 0) return 0;
    
//         if(dp[m][n] != -1) return dp[m][n];
        
//         int up = helper(m - 1, n, dp);
//         int right = helper(m , n -1, dp);
        
//         return dp[m][n] = up + right;
//     }
    
//     int uniquePaths(int m, int n) {
//        
//         vector<vector<int>> dp(m , vector<int> (n , -1));
//         return helper(m - 1, n -1, dp);
//    }
    

// Tabulation
    
int uniquePaths(int m, int n) {
       
        vector<vector<int>> dp(m , vector<int> (n , 0));
        for(int i = 0 ;i < m  ; i++){
            for(int j = 0 ; j < n ; j++){
                if(i == 0 && j == 0) dp[i][j] = 1;
                else{
                    int up = 0, right = 0 ;
                    if(i > 0)
                         up = dp[i-1][j];
                    if(j > 0)
                         right = dp[i][j-1];
                    
                    dp[i][j] = up + right;
                }
            }
        }
    
    return dp[m-1][n-1];
   }
    
    
//     int uniquePaths(int m, int n) {
//         // return paths(0 , 0 ,m ,n);
        
//         // return helper(m - 1, n -1);
        
        
//     }
};