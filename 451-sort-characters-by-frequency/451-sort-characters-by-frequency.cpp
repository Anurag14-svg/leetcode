class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        string ans;
        int n = s.length();
        for(int i = 0; i < n ;i++){
            mp[s[i]]++;
        }
        
        priority_queue<pair<int , char>> pq;
        for(auto it: mp){
            pq.push({it.second , it.first});
        }
        
        while(!pq.empty()){
            ans+= string(pq.top().first , pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};