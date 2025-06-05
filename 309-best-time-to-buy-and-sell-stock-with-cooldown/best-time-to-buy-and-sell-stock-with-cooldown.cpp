class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = -prices[0];
        int sell = 0;
        int cool = 0;
        int n = prices.size();
        if (n == 1) {
            return 0;
        }
        for (int i = 1; i < n; i++) {
            int prev = sell;
            sell = buy + prices[i];
            buy = max(buy, cool - prices[i]);
            cool = max(cool, prev);
        }
        return max(cool, sell);
    }
};