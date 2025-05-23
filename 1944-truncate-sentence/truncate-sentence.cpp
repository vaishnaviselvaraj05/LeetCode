class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> st;
        string answer = "";
        string word = "";
        for (auto ch : s) {
            if (ch != ' ') {
                word += ch;
            } else {
                if (!word.empty()) {
                    st.push_back(word);
                    word = "";
                }
            }
        }
        if (!word.empty()) {
            st.push_back(word);
        }
        for (int i = 0; i < k && i < (int)st.size(); i++) {
            answer += st[i];
            if (i < k - 1 && i < (int)st.size() - 1) {
                answer += " ";
            }
        }
        return answer;
    }
};