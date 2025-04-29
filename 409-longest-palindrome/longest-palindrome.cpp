class Solution {
public:
    int longestPalindrome(string s) {
       int count[128] = {0};
       for(char c : s) count[c]++;
       int l = 0;
       bool odd=false;
       for(int i = 0; i<128;i++){
        if(count[i] % 2 ==0) l += count[i];
        else{
            l +=count[i] -1;
            odd = true;
        }
       }
       if(odd) l += 1;
       return l;
    }
};