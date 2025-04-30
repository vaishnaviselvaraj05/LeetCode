class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int count = 0;
        for(int i = 0; i < s.length() ; i++){
            char ch = s[i];
            if(ch == '('){
                if(count > 0){
                    res = res + ch;
                }
                count ++;
            }else if(ch == ')'){
                count --;
                if(count > 0){
                    res = res + ch;
                }
            }
        }
        return res;
    }
};