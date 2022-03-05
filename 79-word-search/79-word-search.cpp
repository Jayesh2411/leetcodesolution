/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 */

// @lc code=start
class Solution {
    string word;
    bool dfs(vector<vector<char>> &board, int start, int i, int j)
    {
        if(start == word.length())
            return true;
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j]!=word[start])
            return false;
        board[i][j] = '-';
        bool ans = dfs(board,start+1,i+1,j) || dfs(board,start+1,i-1,j) || dfs(board,start+1,i,j-1) || dfs(board,start+1,i,j+1);
        board[i][j] = word[start];
        return ans;
    }
public:
    bool exist(vector<vector<char>>& board, string words) {
        word = words;
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++ )
            {
                if(board[i][j] == words[0])
                {
                    if(dfs(board,0,i,j))
                        return true;
                }
            }
        }
        return false;
    }
};
// @lc code=end

