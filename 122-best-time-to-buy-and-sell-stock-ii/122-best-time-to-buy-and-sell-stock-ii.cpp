class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total = 0;
        for(int i = 1; i < prices.size() ; i++){
            int profit = prices[i] - prices[i-1];
            if(profit > 0){
                total += profit;
            }
        }
        
        return total;
    }
};