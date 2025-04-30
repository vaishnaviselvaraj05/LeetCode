class Solution {
public:
    int numRabbits(vector<int>& answers) {
       unordered_map<int,int> count;
       int total = 0;
       for(int ans : answers) count[ans]++;
       for(auto [x,freq] : count){
        int grpSize = x+1;
        int grp = ceil((double) freq / grpSize);
        total += grp * grpSize;
       }
       return total; 
    }
};