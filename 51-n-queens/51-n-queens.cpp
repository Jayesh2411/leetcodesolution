class Solution {
    void solve( vector<string>& board, int i, int n, vector<vector<string>>& result, int col[], int ld[], int rd[])
    {
        if(i==n)
        {
            result.push_back(board);
        }
        for(int k = 0; k < n; k++)
        {
            if(col[k]!=1&&ld[n-i+k]!=1&&rd[i+k]!=1)
            {
                board[i][k]='Q';
                col[k] = 1;
                ld[n-i+k] = 1;
                rd[i+k] = 1;
                solve(board,i+1,n,result,col,ld,rd);
                col[k] = 0;
                ld[n-i+k] = 0;
                rd[i+k] = 0;
                board[i][k]='.';
            }
            
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board;
        string row = "";
        int col[n];
        int ld[2*n];
        int rd[2*n];
        memset(col,0,sizeof(col));
        memset(ld,0,sizeof(ld));
        memset(rd,0,sizeof(rd));
        for(int i = 0; i < n; i++)
            row = row + ".";
        board.resize(n,row);
        vector<vector<string>> result;
        solve(board,0,n,result,col,ld,rd);
        return result;
    }
};