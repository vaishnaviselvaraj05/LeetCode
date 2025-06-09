class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        unordered_map<int,int> map;
        int count = 0;
        int mod = 1e9 + 7;
        for(int i : deliciousness)
        {
            for(int pow = 1 ; pow <= (1 << 21) ; pow <<= 1)
            {
                int complement = pow - i;
                if(map.find(complement) != map.end())
                {
                    count = (count + map[complement]) % mod;
                }
            }
            map[i]++;
        }
        return count;
    }
};