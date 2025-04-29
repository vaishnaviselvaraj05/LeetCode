class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> map;
        int count=0;
        for(char c : jewels) map[c]++;
        for(char c : stones){
            if(map[c] !=0) count++;
        }
        return count;
    }
};