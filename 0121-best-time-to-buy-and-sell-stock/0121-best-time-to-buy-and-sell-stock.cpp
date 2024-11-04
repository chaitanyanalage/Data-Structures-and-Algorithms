class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int maxProfit = 0;

        for(int i = 0; i < prices.size(); i++) {
            if(buyPrice > prices[i]) {
                buyPrice = prices[i];
            }
            else {
                int profit = prices[i] - buyPrice;
                maxProfit = max(profit, maxProfit);
            }
        }
        return maxProfit;
    }
};