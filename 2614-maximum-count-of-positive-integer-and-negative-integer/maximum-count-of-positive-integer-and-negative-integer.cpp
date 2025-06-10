class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int pcount = 0;
        int ncount = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                ncount++;
            }
            if (nums[i] > 0) {
                pcount++;
            }
        }
        return max(ncount, pcount);
    }
};