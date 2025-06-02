class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> maxl(n - 2, vector<int>(n - 2));
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < n - 2; j++) {
                int maxv = 0;
                for (int r = i; r <= i + 2; r++) {
                    for (int c = j; c <= j + 2; c++) {
                        maxv = max(maxv, grid[r][c]);
                    }
                }
                maxl[i][j] = maxv;
            }
        }
        return maxl;
    }
};