class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int freq[26] = {0};
        int n = words.size();
        for(auto word : words){
            for(auto s : word){
                freq[s - 'a']++;
            }
        }
        for(int count : freq){
            if(count % n != 0){
                return false;
            }
        }
        return true;
    }
};