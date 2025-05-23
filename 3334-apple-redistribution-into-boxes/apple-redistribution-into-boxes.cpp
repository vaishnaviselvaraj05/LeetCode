class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int res = 0;
        int sum = 0;
        int max = 0;
        for (auto i : apple) {
            res += i;
        }
        sort(capacity.begin(),capacity.end(),[](int a , int b){return a> b;});
        for(auto i : capacity)
        {
            sum += i;
            max++;
            if(sum >= res) return max;
        }
        return max;
    }
};