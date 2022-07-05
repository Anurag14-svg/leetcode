class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        set<int> st;
        int n = nums.size();
        int j = 0;
        int ans = 0;
        int sum = 0;
        int i = 0;
        
        while(j < n){
            
            while(st.find(nums[j]) != st.end()){
                sum -= nums[i];
                st.erase(nums[i]);
                i++;
            }
            st.insert(nums[j]);
            sum += nums[j];
            j++;
            
            ans = max(ans , sum);
        
        }
        
        return ans;
    }
};