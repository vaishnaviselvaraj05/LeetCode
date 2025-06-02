class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int size = m * n;
        k = k % size;
        vector<int> flat;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                flat.push_back(grid[i][j]);
            }
        }
        vector<int> matrix(size);
        for (int i = 0; i < size; i++) {
            matrix[(i + k) % size] = flat[i];
        }
        vector<vector<int>> res(m, vector<int>(n));
        for (int i = 0; i < size; i++) {
            res[i / n][i % n] = matrix[i];
        }
        return res;
    }
};