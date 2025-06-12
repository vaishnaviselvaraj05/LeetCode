class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> res(m, vector<int>(n, -1));
        return helper(m - 1, n - 1, grid, res);
    }

    int helper(int m, int n, vector<vector<int>>& grid,
               vector<vector<int>>& res) {
        if (m < 0 || n < 0) {
            return INT_MAX;
        }
        if (m == 0 && n == 0) {
            return grid[0][0];
        }
        if (res[m][n] != -1) {
            return res[m][n];
        }
        int down = helper(m - 1, n, grid, res);
        int right = helper(m, n - 1, grid, res);
        res[m][n] = grid[m][n] + min(down, right);
        return res[m][n];
    }
};