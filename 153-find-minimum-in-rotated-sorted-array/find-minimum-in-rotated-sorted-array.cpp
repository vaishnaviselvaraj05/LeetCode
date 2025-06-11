class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int min = INT_MAX;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[low] <= nums[mid]) {
                if (min > nums[low]) {
                    min = nums[low];
                } else {
                    low = mid + 1;
                }
            } else {
                if (min > nums[mid]) {
                    min = nums[mid];
                } else {
                    high = mid - 1;
                }
            }
        }
        return min;
    }
};