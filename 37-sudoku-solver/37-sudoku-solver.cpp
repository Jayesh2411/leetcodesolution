class Solution {
private:
    int row[9][60], col[9][60], cube[3][3][60];
    bool sudoku(vector<vector<char>> &board, int i, int j, char val)
    {
        if(row[i][val])
            return false;
        if(col[j][val])
            return false;
        int rowCube = i/3;
        int colCube = j/3;
        if(cube[rowCube][colCube][val])
            return false;
        return true;
        
    }
    bool solveSudoku(vector<vector<char>>& board, int i, int j)
    {
        if(i==9)
            return true;
        if(j==9)
            return solveSudoku(board,i+1,0);
        if(board[i][j]!='.')
            return solveSudoku(board,i,j+1);
        for( char val = '1'; val <= '9'; val++ )
        {
            if(sudoku(board,i,j,val))
            {
                board[i][j] = val;
                int rowCube = i/3;
                int colCube = j/3;
                row[i][val] = 1;
                col[j][val] = 1;
                cube[rowCube][colCube][val] = 1;
                if(solveSudoku(board,i,j+1))
                    return true;
                row[i][val] = 0;
                col[j][val] = 0;
                cube[rowCube][colCube][val] = 0;
                board[i][j] = '.';
            }
        }
        return false;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++ )
        {
            for(int j = 0; j < 9; j++ )
            {
                if(board[i][j]!='.')
                {
                    int val = board[i][j];
                    int rowCube = i/3;
                    int colCube = j/3;
                    row[i][val] = 1;
                    col[j][val] = 1;
                    cube[rowCube][colCube][val] = 1;
                }
            }
        }
        solveSudoku(board,0,0);
    }
};