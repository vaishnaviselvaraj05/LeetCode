class Solution {
public:
    bool rotateString(string s, string goal) {
       if(s.length()!=goal.length()) return false;
       int n = s.length();
       for(int i = 0; i<n; i++){
        char fchar = s[0];
        s = s.substr(1) + fchar;
        if(s == goal) return true;
       } 
       return false;
    }
};