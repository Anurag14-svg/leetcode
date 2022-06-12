class Comp{
    public:
     bool operator() (string &t , string &s){
        if(s.size() != t.size()) return s.size() < t.size();
        return s < t;
    }
};

class Solution {

public:
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string  , vector<string> , Comp> pq;
        for(string &num : nums){
            pq.push(num);
            if(pq.size() > k) pq.pop();
        }
        
        
        return pq.top();
    }
};