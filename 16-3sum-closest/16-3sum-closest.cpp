class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        if(n < 3) return 0;
        sort(nums.begin() , nums.end());
        int res = nums[0] + nums[1] + nums[2];
        for(int i = 0 ; i < n - 2; i++){
            
            int start = i + 1; 
            int end = n - 1;
            
            
            while(start < end){
                int sum = nums[i] + nums[start] + nums[end];
                if(abs(sum - target) < abs(res-target)) res = sum;
                if(sum < target) start++;
                else end--;
            }
        }
        
        return res;
    }
};