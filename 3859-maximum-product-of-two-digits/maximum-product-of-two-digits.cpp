class Solution {
public:
    int maxProduct(int n) {
        int max = 0;
        int res = 0;
        vector<int> v;
        while(n > 0)
        {
            v.insert(v.begin(), n%10);
            n = n/10;
        }
        for (int i = 0; i < v.size(); i++) {
            for (int j = i + 1; j < v.size(); j++) {
                res = v[i] * v[j];
                if (max < res)
                    max = res;
            }
        }
        return max;
    }
};