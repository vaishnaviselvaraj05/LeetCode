class Solution {
public:
    int uniquePaths(int m, int n) {
        long long s = min(m - 1 , n - 1);
        long long ans = 1;
        for(int i = 0 ; i < s ; i++)
        {
            ans = ans * (m + n - 2 - i) / (i + 1);
        }
        return ans;
    }
};