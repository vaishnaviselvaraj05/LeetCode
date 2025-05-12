class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
      int n=grid.size();
      int m=n*n;
      vector<int>flat;
      for(auto row:grid){
        for(int val:row) flat.push_back(val);
      } 
      int duplicate=-1,missing=-1;
      for(int num=1;num<=m;num++){
        int count=0;
        for(int val:flat){
            if(val==num)count++;
        }
        if(count==2)duplicate=num;
        if(count==0)missing=num;
      }
      return {duplicate,missing};
    }
};