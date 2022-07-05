class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        int n = points.size();
        
        priority_queue<pair<int , vector<int>> > pq;
        
        for(auto it : points){
            int sum = (it[0] * it[0] ) + (it[1] * it[1]) ;
            pq.push(make_pair(sum , it));
            if(pq.size() > k) pq.pop();
        }
        
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
    
};