class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i = 0 , j = 0 ;
        for(string command : commands)
        {
            if(command == "UP")
            {
                i -= 1;
            }
            else if(command == "DOWN")
            {
                i += 1;
            }
            else if(command == "LEFT")
            {
                j -= 1;
            }
            else if(command == "RIGHT")
            {
                j += 1;
            }
        }
        return i * n + j;
    }
};