class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return helper(nums, 0, 0, target);
    }
    int helper(vector<int>& nums, int i, int sum, int target) {
        if (i == nums.size()) {
            return sum == target ? 1 : 0;
        }
        int add = helper(nums, i + 1, sum + nums[i], target);
        int sub = helper(nums, i + 1, sum - nums[i], target);
        return add + sub;
    }
};