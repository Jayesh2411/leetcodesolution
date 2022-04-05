class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<int> prev(board[0].size(),0), curr(board[0].size(),0);
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                int totalLive = 0;
                curr[j] = board[i][j];
                totalLive += prev[j];
                if(j != 0)
                {
                    totalLive += prev[j-1];
                    totalLive += curr[j-1];
                    if(i != board.size()-1)
                    {
                        totalLive += board[i+1][j-1];
                    }
                }
                if(i != board.size()-1)
                    totalLive += board[i+1][j];
                if(j != board[0].size()-1)
                {
                    totalLive += prev[j+1];
                    totalLive += board[i][j+1];
                    if(i != board.size()-1)
                    {
                        totalLive += board[i+1][j+1];
                    }
                }
                if((totalLive == 3 && board[i][j] == 0) || ((totalLive == 2 || totalLive == 3) && board[i][j] == 1))
                    board[i][j] = 1;
                else
                    board[i][j] = 0;
                
            }
            swap(prev,curr);
        }
    }
};