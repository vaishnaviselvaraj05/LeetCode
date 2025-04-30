class Solution {
public:
    long long maximumSumOfHeights(vector<int>& heights) {
        int n = heights.size();
        long long maxSum = 0;
        for(int peak = 0 ; peak < n ; peak++){
            long long sum = heights[peak];
            int minHeight = heights[peak];
            for(int i = peak-1 ; i >=0 ; i--){
                minHeight = min(minHeight,heights[i]);
                sum += minHeight;
            }
            minHeight = heights[peak];
            for(int i = peak + 1 ; i < n ; i++){
                minHeight = min(minHeight,heights[i]);
                sum += minHeight;
            }
            maxSum = max(maxSum,sum);
        }
        return maxSum;
    }
};