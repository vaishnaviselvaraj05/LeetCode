class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
       vector<int> res;
       int r=grid.size();
       int c=grid[0].size();
       bool skip=false;
       for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<c;j++){
                if(!skip){
                    res.push_back(grid[i][j]);
                }
                skip=!skip;
            }
        }else{
            for(int j=c-1;j>=0;j--){
                if(!skip) res.push_back(grid[i][j]);
                skip=!skip;
            }
        }
       }
       return res;
    }
};