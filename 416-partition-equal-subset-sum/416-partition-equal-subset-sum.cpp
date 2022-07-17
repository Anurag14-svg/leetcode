class Solution {
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int idx = arr.size();
        vector<bool> prev(sum +1 , false)  ,curr(sum+1, false);
        prev[0] = curr[0] = true;
       if(arr[0] <= sum) prev[arr[0]] = true;
        
        for(int i = 1 ; i < idx; i++){
            for(int j = 1; j <= sum ; j++){
                bool not_take = prev[j] ;
                bool take = false;
                if(j >= arr[i]){
                    take = prev[j - arr[i]];
                }
                
                curr[j] = take || not_take;
                }
                
                prev = curr;
        }
        
        return prev[sum];
        
    }
    
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        if(n == 1) return false;
        for(int i = 0 ; i < nums.size(); i++){
            sum += nums[i];
        }
        
        if(sum % 2) return false;
        int target = sum / 2;
        
        return isSubsetSum(nums , target);
    }
};