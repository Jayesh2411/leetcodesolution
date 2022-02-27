class Solution {
    unordered_set<string> row,col,cube;
    bool sudoku(vector<vector<char>> board, int i, int j, char val)
    {
        if(row.find(to_string(i)+"_"+val)!=row.end())
            return false;
        if(col.find(to_string(j)+"_"+val)!=col.end())
            return false;
        int rowCube = i/3;
        int colCube = j/3;
        if(cube.find(to_string(rowCube)+"_"+to_string(colCube)+"_"+val)!=cube.end())
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
                row.insert(to_string(i) + "_" + val);
                col.insert(to_string(j) + "_" + val);
                cube.insert(to_string(rowCube)+"_"+to_string(colCube)+"_"+val);
                if(solveSudoku(board,i,j+1))
                    return true;
                row.erase(to_string(i) + "_" + val);
                col.erase(to_string(j) + "_" + val);
                cube.erase(to_string(rowCube)+"_"+to_string(colCube)+"_" + val);
                board[i][j] = '.';
            }
        }
        return false;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        for(int r = 0; r < 9; r++ )
        {
            for(int c = 0; c < 9; c++ )
            {
                if(board[r][c]!='.')
                {
                    row.insert(to_string(r) + "_" + board[r][c]);
                    col.insert(to_string(c) + "_" + board[r][c]);
                    int rowCube = r/3;
                    int colCube = c/3;
                    cube.insert(to_string(rowCube)+"_"+to_string(colCube)+"_"+board[r][c]);
                }
            }
        }
        solveSudoku(board,0,0);
    }
};