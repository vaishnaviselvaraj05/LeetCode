class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = -1;
        for (int i = 0; i < n; i++) {
            high = max(high, piles[i]);
        }
        int ans = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            long time = 0;
            for (int i = 0; i < n; i++) {
                time += ceil((double) piles[i]/ (double)mid);
            }
            if (time <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};