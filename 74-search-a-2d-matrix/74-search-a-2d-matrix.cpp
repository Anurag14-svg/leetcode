class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int col = matrix[0].size() ;
        int row = matrix.size();
        
        int high = (row * col) -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(matrix[mid / col][mid % col] == target) return true;
            else if(matrix[mid / col][mid % col] <  target) low = mid + 1;
            else high = mid -1;
            
        }
        return false;
    }
};