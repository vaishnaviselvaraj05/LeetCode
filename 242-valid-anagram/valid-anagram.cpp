class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> map;
        for (auto i : s) {
            map[i]++;
        }
        for (auto i : t) {
            map[i]--;
            if (map[i] < 0) {
                return false;
            }
        }
        return true;
    }
};