class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> res(m + 1, vector<int>(n + 1, -1));
        return helper(m, n, res);
    }

    int helper(int m, int n, vector<vector<int>>& res) {
        if (m == 0 || n == 0) {
            return 0;
        }
        if (m == 1 && n == 1) {
            return 1;
        }
        if (res[m][n] != -1) {
            return res[m][n];
        }
        res[m][n] = helper(m - 1, n, res) + helper(m, n - 1, res);
        return res[m][n];
    }
};