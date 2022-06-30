class Solution {
public:
    
    // int paths(int i , int j , int m , int n, vector<vector<int>> &dp){
    //     if((i == m - 1) && (j == n - 1)) return 1;
    //     if((i>=m) || (j >=n)) return 0;
    //     if(dp[i][j] != -1) return dp[i][j];
    //     else return dp[i][j] = paths(i+1 , j, m , n, dp) + paths(i , j+1, m , n , dp );
    // }
    
    int uniquePaths(int m, int n) {
//         int i = 0;
//         int j = 0;
        
//         vector<vector<int>> dp(m + 1 , vector<int>(n + 1, -1));
//         if( m == 1 && n == 1) return 1;
//         paths(i , j ,m , n, dp);
//         return dp[0][0];
        
        int N = (m + n) - 2;
        int r = m - 1;
        double res = 1;
        
        for(int i = 1; i <= r ;i++){
            res = res * (N - r + i) / i;
        }
        
        return (int)res;
    }
};