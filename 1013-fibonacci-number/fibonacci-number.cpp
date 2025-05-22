class Solution {
public:
    int fib(int n) {
        int prev = 0, curr = 1, next, i = 2;
        if (n <= 1)
            return n;
        while (i <= n) {
            next = prev + curr;
            prev = curr;
            curr = next;
            i++;
        }
        return next;
    }
};
