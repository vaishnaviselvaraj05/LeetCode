class Solution {
public:
    int differenceOfSums(int n, int m) {
       int total=n*(n+1)/2;
       int k=n/m;
       int divisible=m*k*(k+1)/2;
       int notdivisible=total-divisible;
       return notdivisible-divisible; 
    }
};