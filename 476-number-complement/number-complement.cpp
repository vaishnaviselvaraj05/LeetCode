class Solution {
public:
    int findComplement(int num) {
        unsigned int res = 0;
        unsigned int place = 1;
        while(num > 0)
        {
            int bit = num % 2;
            int flip = 1 - bit;
            res += flip * place;
            place *= 2;
            num /= 2;
        }
        return res;
    }
};