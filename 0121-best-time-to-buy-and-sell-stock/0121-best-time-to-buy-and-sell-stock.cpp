class Solution {
public:
    int maxProfit(vector<int>& prices) { 
        int leastSoFar = INT_MAX;
        int overallProfit = 0;
        int profitIfSoldToday = 0;

        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < leastSoFar) {
                leastSoFar = prices[i];
            }
            profitIfSoldToday = prices[i] - leastSoFar;
            if(overallProfit < profitIfSoldToday) {
                overallProfit = profitIfSoldToday;
            }
        }
        return overallProfit;
    }
};