class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        helper(nums, 0, temp, ans, false);
        return ans;
    }

    void helper(vector<int>& nums, int i, vector<int>& temp,
                vector<vector<int>>& ans, bool prev) {
        if (i == nums.size()) {
            ans.push_back(temp);
            return;
        } else {
            helper(nums, i + 1, temp, ans, false);
            if (i > 0 && nums[i] == nums[i - 1] && (!prev)) {
                return;
            }
            temp.push_back(nums[i]);
            helper(nums, i + 1, temp, ans, true);
            temp.pop_back();
        }
    }
};