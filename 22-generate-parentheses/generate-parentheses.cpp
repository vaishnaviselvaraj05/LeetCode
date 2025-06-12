class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        helper(n, n, s, ans);
        return ans;
    }

    void helper(int open, int close, string s, vector<string>& ans) {
        if (open == 0 && close == 0) {
            ans.push_back(s);
            return;
        }

        if (open > 0) {
            string curr = s + '(';
            helper(open - 1, close, curr, ans);
        }

        if (open < close) {
            string curr = s + ')';
            helper(open, close - 1, curr, ans);
        }
    }
};