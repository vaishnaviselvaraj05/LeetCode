class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 0)
        {
            return "";
        }
        sort(strs.begin(),strs.end());
        string first = strs.front();
        string last = strs.back();
        auto mis_match = mismatch(first.begin(),first.end(),last.begin());
        return string(first.begin(),mis_match.first);
    }
};