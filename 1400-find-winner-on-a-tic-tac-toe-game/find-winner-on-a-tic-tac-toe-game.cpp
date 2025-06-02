class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> board(3, vector<char>(3, ' '));

        for (int i = 0; i < moves.size(); ++i) {
            int row = moves[i][0];
            int col = moves[i][1];
            board[row][col] = (i % 2 == 0) ? 'X' : 'O';
        }

        for (int i = 0; i < 3; ++i) {

            if (board[i][0] != ' ' && board[i][0] == board[i][1] &&
                board[i][1] == board[i][2])
                return board[i][0] == 'X' ? "A" : "B";

            if (board[0][i] != ' ' && board[0][i] == board[1][i] &&
                board[1][i] == board[2][i])
                return board[0][i] == 'X' ? "A" : "B";
        }

        if (board[0][0] != ' ' && board[0][0] == board[1][1] &&
            board[1][1] == board[2][2])
            return board[0][0] == 'X' ? "A" : "B";

        if (board[0][2] != ' ' && board[0][2] == board[1][1] &&
            board[1][1] == board[2][0])
            return board[0][2] == 'X' ? "A" : "B";

        if (moves.size() == 9)
            return "Draw";

        return "Pending";
    }
};
