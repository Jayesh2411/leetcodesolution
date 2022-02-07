class Solution {
    public String convert(String s, int numRows) {
       
        int cols = s.length();
        String zigZag[][] = new String[numRows][cols];
        int k = 0;
        for (int i = 0; i < cols; i++) {
            if (k >= s.length()) {
                break;
            }
            for (int j = 0; j < numRows && k < s.length(); j++) {   //fills the r
                zigZag[j][i] = String.valueOf(s.charAt(k++));
            }

            int gap = numRows - 2;
            int j = numRows - 1;

            for (int a = 1; a <= gap && k < s.length(); a++) {
                zigZag[j - a][++i] = String.valueOf(s.charAt(k++));
            }
        }

        String newStr = "";
        k = 0;
        for (int i = 0; i < numRows; i++) {
            if (k >= s.length()) {
                break;
            }
            for (int j = 0; j < cols; j++) {
                if (zigZag[i][j] != null) {
                   newStr += zigZag[i][j];
                    k++;
                }
                    
            }
        }
        return newStr;
    }
}