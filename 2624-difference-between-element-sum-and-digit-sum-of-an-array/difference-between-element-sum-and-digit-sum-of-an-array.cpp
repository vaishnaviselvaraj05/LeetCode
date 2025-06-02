class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0 ;
        int dsum = 0;
        for(auto i : nums)
        {
            sum += i;
            int n = i;
            while(n > 0)
            {
                 dsum += n % 10 ;
                n = n / 10;
            }
        }
        return abs(sum-dsum);
    }
};