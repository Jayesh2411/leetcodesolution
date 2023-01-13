class Solution {
        public int[][] transpose(int[][] matrix) {
        int row = matrix.length;
        int col = matrix[0].length;
        int transposeMatrix[][] = new int[col][row];
        for (int j = 0;j<matrix.length;j++ ){
            for (int i =0;i<matrix[0].length;i++) {
                transposeMatrix[i][j]  = matrix[j][i];
            }
        }

        return transposeMatrix;
    }
}