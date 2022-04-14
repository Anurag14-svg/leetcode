class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(auto it : piles){
            pq.push(it);
        }
        int ans = 0;
        while(k){
            int first = pq.top();
            pq.pop();
            
            if(first % 2 != 0){
                pq.push((first / 2) + 1);
            }
            else{
                pq.push(first/2);
            }
            
            
            
            k--;
        }
        
        while(!pq.empty()){
            ans+= pq.top();
            pq.pop();
        }
        
        return ans;
    }
};