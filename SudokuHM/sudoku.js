var isValidSudoku = function(board) {
    var rowMap = new Map();
    var colMap = new Map();
    var i,j,k,l;
    for(i=0;i<9;i++) {
        rowMap.clear();
        colMap.clear();
        for(j=0;j<9;j++){
            if(board[i][j]!=".") {
                if(rowMap.has(board[i][j]))
                    return false;
                else
                    rowMap.set(board[i][j],true);
            }
            if(board[j][i]!=".") {
                if(colMap.has(board[j][i]))
                    return false;
                else
                    colMap.set(board[j][i],true);
            }
        }
    }
        for(i=0;i<7;i=i+3) {
            for(j=0;j<7;j=j+3) {
                rowMap.clear();
                for(k=0;k<3;k++) {
                    for(l=0;l<3;l++) {
                        if(board[i+k][l+j]!=".") {
                            if(rowMap.has(board[i+k][l+j]))
                                return false;
                            else
                                rowMap.set(board[i+k][l+j],true);
                        }
                    }
                }
            }
        }
    return true;
};
let board = [[".",".","4",".",".",".","6","3","."],[".",".",".",".",".",".",".",".","."],["5",".",".",".",".",".",".","9","."],[".",".",".","5","6",".",".",".","."],["4",".","3",".",".",".",".",".","1"],[".",".",".","7",".",".",".",".","."],[".",".",".","5",".",".",".",".","."],[".",".",".",".",".",".",".",".","."],[".",".",".",".",".",".",".",".","."]];
console.log(isValidSudoku(board));