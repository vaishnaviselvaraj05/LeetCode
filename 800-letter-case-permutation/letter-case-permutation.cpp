class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        queue<string> q;
        q.push(s);
        for (int i = 0; i < s.length(); i++) {
            if (isalpha(s[i])) {
                int n = q.size();
                while (n--) {
                    string curr = q.front();
                    q.pop();

                    curr[i] = tolower(s[i]);
                    q.push(curr);

                    curr[i] = toupper(s[i]);
                    q.push(curr);
                }
            }
        }
        while (!q.empty()) {
            res.push_back(q.front());
            q.pop();
        }
        return res;
    }
};