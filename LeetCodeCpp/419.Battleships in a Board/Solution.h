class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int shipsCount = 0;

        if (board.size() != 0 && board[0].size() != 0)
        {
            int height = board.size();
            int width = board[0].size();

            for (size_t i = 0; i < height; i++)
            {
                for (size_t j = 0; j < width; j++)
                {
                    if (board[i][j] == 'X' 
                    && (i == 0 || board[i-1][j] != 'X')
                    && (j == 0 || board[i][j-1] != 'X'))
                    {
                        shipsCount++;
                    }
                }
            }
        }
        return shipsCount;
        

    }
};