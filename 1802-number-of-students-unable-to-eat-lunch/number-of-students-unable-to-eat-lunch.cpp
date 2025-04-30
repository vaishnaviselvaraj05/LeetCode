class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int circle = 0;
        int square = 0;
        int n = students.size();
        for(int i = 0 ; i < n ; i++){
            if(students[i] == 0) circle ++;
            else square ++;
        }
        for(int i = 0 ; i < n ; i++){
            if(sandwiches[i] == 0){
                if(circle > 0) circle --;
                else return n-i;
            }else{
                if(square > 0) square --;
                else return n-i;
            }
        }
        return 0;
    }
};