class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> res(m, vector<int>(n, -1));
        return helper(m - 1, n - 1, obstacleGrid, res);
    }

    int helper(int m, int n, vector<vector<int>>& obstacleGrid,
               vector<vector<int>>& res) {
        if (m < 0 || n < 0) {
            return 0;
        }
        if (obstacleGrid[m][n] == 1) {
            return 0;
        }
        if (m == 0 && n == 0) {
            return 1;
        }
        if (res[m][n] != -1) {
            return res[m][n];
        }
        res[m][n] = helper(m - 1, n, obstacleGrid, res) +
                    helper(m, n - 1, obstacleGrid, res);
        return res[m][n];
    }
};