class Solution {
public:
    int countOperations(int num1, int num2) {
        int count=0;
        while(num1 !=0 && num2 !=0){
            if(num1<=num2){
                int res = num2-num1;
                num2=res;
            }
            else {
                int res = num1-num2;
                num1=res;
            }
            count++;
        }
        return count;
    }
};