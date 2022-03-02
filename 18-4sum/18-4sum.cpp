class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1; j < n; j++){
                int target_sum = target - nums[i] - nums[j];
                int left = j + 1;
                int right = n - 1;
                while(left < right) {
                    int mid = right - left / 2;
                    int sum = nums[left] + nums[right];
                    if(target_sum > sum) left++;
                    else if(target_sum < sum) right--;
                    else {
                        vector<int> temp = {nums[i] , nums[j] , nums[left] ,                                nums[right]};
                        ans.push_back(temp);
                        while(left < right && nums[left] == temp[2] ){
                            left++;
                        }
                        while(left < right && nums[right] == temp[3]){
                            right--;
                        }
                    }
                }
                
                while( j + 1 < n && nums[j+1] == nums[j] ) j++;
            }
            
            while(i+1 < n && nums[i+1] == nums[i]) i++;
        }
        
        return ans;
    }
};