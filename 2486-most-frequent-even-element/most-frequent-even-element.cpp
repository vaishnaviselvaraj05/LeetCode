class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> map;
        for (auto i : nums) {
            if (i % 2 == 0) {
                map[i]++;
            }
        }
        int max = 0;
        int res = -1;
        for (auto [num, freq] : map) {
            if (freq > max || freq == max && num < res) {
                max = freq;
                res = num;
            }
        }
        return res;
    }
};