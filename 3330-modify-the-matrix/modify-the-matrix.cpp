class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> col(n);
        for(int j = 0; j < n; j++){
            int max=-1;
            for(int i = 0; i < m; i++){
                if(matrix[i][j] != -1){
                    if(matrix[i][j] > max) max=matrix[i][j];
                }
            }
            col[j]=max;
        }
        vector<vector<int>> res=matrix;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(res[i][j] == -1) res[i][j] = col[j];
            }
        }
        return res;
    }
};