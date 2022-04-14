class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        
        priority_queue< pair<int , int>> pq;
        vector<int> ans;
        
        for(auto ut: mp){
            pq.push({ut.second , ut.first});
        }
        
        while(!pq.empty() && k){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        
        return ans;
    } 
};