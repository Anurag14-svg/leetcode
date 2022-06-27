class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int>  mu;
        int sum = 0;
        int count = 0;
        for(auto n : nums){
            sum+= n;
            if(sum == k) count++;
            if(mu.find(sum-k) != mu.end()) count+=mu[sum-k];
            mu[sum]++;
        }
        
        return count ;
    }
};