class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> res;
        for (int i = 0; i < row; i++) {
            int min = matrix[i][0];
            int minc = 0;
            for (int j = 1; j < col; j++) {
                if (matrix[i][j] < min) {
                    min = matrix[i][j];
                    minc = j;
                }
            }
            bool isLucky = true;
            for (int k = 0; k < row; k++) {
                if (matrix[k][minc] > min) {
                    isLucky = false;
                    break;
                }
            }
            if (isLucky) {
                res.push_back(min);
            }
        }
        return res;
    }
};