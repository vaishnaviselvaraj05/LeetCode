class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int first = 0;
        int second = 0;
        for(int i = 2; i<=n; i++){
            int cur = min(second+cost[i-1], first+cost[i-2]);
            first = second;
            second = cur;
        }
        return second;
    }
};