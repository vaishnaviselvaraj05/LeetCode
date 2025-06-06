class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        int n = rectangles.size();
        unordered_map<double, long long> map;
        long long count = 0;
        for (auto i : rectangles) {
            double ratio = (double)i[0] / i[1];
            count += map[ratio];
            map[ratio]++;
        }
        return count;
    }
};