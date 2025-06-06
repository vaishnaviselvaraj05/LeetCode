class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<int>res;
        for(auto i : nums)
        {
            map[i]++;
        }
        for(auto [num,freq] : map)
        {
            if(freq == 2)
            {
                res.push_back(num);
            }
        }
        return res;
    }
};