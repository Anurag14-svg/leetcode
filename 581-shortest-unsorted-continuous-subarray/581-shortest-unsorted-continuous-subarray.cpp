class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin() , temp.end());
        int n = nums.size();
        int l = 0 ; 
        int r = n - 1;
        int ans = 0;
        
        if(n <= 1) return 0;
        while(l < n){
            if(nums[l] == temp[l]) l++;
            else break;
        }
        while( r >= 0){
            if(nums[r] == temp[r]) r--;
            else break;
        }
        
        if(r > l){
            ans = r - l + 1;
        }
        
        return ans;
    }
};