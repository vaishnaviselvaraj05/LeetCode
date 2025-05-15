class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int min = prices[0];
        int n = prices.size();
        for(int i = 1 ; i < n ; i++)
        {
            if(min >= prices[i])
            {
                min = prices[i];
            }
            if(prices[i] - min > max)
            {
                max = prices[i] - min;
            }
        }
        return max;
    }
};