class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max = -1;
        int row = -1;
        for(int i = 0; i < mat.size(); i++)
        {
            int count = 0;
            for(int val : mat[i])
            {
                count += val;
            }
            if(count > max)
            {
                max = count;
                row = i;
            }
        }
        return {row,max};
    }
};