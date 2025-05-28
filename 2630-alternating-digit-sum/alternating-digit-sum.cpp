class Solution {
public:
    int alternateDigitSum(int n) {
      string s = to_string(n);
      int total = 0;
      int sign = 1;
      for(char ch : s)
      {
        int digit = ch -'0';
        total += sign * digit;
        sign = -sign;
      }
      return total;  
    }
};