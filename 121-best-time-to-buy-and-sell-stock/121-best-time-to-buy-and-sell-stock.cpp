// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int mini = INT_MAX;
//         int profit = 0;
//         for(int n : prices){
//             mini = min(mini , n);
//             int curr = n - mini;
//             profit = max(profit ,curr );
//         }
        
//         return profit;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int profit = 0;
        
        for(int i = 0 ; i < prices.size() ; i++){
            mini = min(mini , prices[i]);
            int curr = prices[i] - mini;
            profit = max(profit , curr);
        }
        
        return profit;
    }
};