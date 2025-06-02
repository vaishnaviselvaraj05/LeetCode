class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int> res;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0 && nums[i] % 3 == 0) {
                res.push_back(nums[i]);
            }
        }
        for (auto i : res) {
            sum += i;
        }
        int n = res.size();
        if (n == 0)
            return 0;
        return sum / n;
    }
};