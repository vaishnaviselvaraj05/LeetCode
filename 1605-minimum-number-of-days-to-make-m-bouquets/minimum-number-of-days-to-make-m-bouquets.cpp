class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if (n < (long)m * (long)k) {
            return -1;
        }
        int low = INT_MAX;
        int high = INT_MIN;
        int result = -1;
        for (int i = 0; i < n; i++) {
            low = min(low, bloomDay[i]);
            high = max(high, bloomDay[i]);
        }
        while (low <= high) {
            int mid = (low + high) / 2;
            if (bloomDays(bloomDay, m, k, mid, n)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }

    bool bloomDays(vector<int>& bloomDay, int m, int k, int mid, int n) {
        int count = 0;
        int minday = 0;
        for (int i = 0; i < n; i++) {
            if (bloomDay[i] <= mid) {
                count++;
            } else {
                minday += count / k;
                count = 0;
            }
        }
        minday += count / k;
        if (minday >= m) {
            return true;
        }
        return false;
    }
};