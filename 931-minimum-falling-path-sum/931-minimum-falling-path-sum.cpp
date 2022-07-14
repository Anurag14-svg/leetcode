class Solution {
public:
   int minFallingPathSumHelper(vector<vector<int>>& matrix, int r, int c, vector<vector<int>>&dp){
       if(c >= matrix[0].size() or c < 0) return INT_MAX;
        if(r == 0 ) return matrix[0][c]; 
        
        if(dp[r][c] != -1) return dp[r][c];
        return dp[r][c] = matrix[r][c] + min(min(minFallingPathSumHelper(matrix, r-1, c+1 , dp), minFallingPathSumHelper(matrix, r-1, c , dp)), minFallingPathSumHelper(matrix, r-1, c-1 ,dp));
        
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        int ans = INT_MAX;
        vector<vector<int>>dp(rows , vector<int>(rows , -1));
        for(int c=0; c < cols; c++){
            ans = min(ans, minFallingPathSumHelper(matrix, rows-1, c , dp));
        }
        return ans;
    }
};