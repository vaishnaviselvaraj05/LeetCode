class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        for(auto i : nums)
        {
            map[i]++;
            if(map[i] > nums.size() / 2)
            {
                return i;
            }
        }
        return -1; 
    }
};