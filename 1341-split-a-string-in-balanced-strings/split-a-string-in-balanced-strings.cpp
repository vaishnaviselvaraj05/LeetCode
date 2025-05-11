class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int balance=0;
        for(char ch:s){
            if(ch=='R')balance++;
            else if(ch== 'L')balance--;
            if(balance==0) count++;
        }
        return count;
    }
};