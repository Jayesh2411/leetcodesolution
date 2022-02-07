class Solution {
    public String convert(String s, int numRows) {
        int cols = s.length();

        String zigZag[][] = new String[numRows][cols];
        int k =0;
        for (int i =0;i<cols;i++) {
            int j =0;

            for (;j<numRows;j++) {
                if (k>= s.length()) {
                    break;
                }
                zigZag[j][i] = String.valueOf(s.charAt(k++));
            }
            if (j == numRows) {

                int gap = j-2;
                j-=1;
                for (int a=1;a<=gap;a++) {
                    if (k>= s.length()) {
                        break;
                    }
                    zigZag[j-a][++i] = String.valueOf(s.charAt(k++));
                }

            }
        }



        String newStr = "";
        for (int i = 0;i<numRows;i++) {
            for (int j = 0;j<cols;j++) {
                if (zigZag[i][j] != null)
                    newStr += zigZag[i][j];
            }
        }
        return newStr;
    }
}