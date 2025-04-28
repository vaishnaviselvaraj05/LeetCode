class Solution {
public:
    bool checkRecord(string s) {
        int abs = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] =='A'){
                abs++;
                if(abs>=2) return false;
            }
            if(i>=2 && s[i] == 'L' && s[i-1] == 'L' && s[i-2] == 'L') return false;
        }
        return true;
    }
};