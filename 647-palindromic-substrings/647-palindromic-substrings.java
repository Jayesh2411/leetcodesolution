class Solution {
    public int countSubstrings(String s) {
        int count = 0;
        if(s == null || s.isEmpty()) {
            return count;
        }
        for (int i =0;i<s.length();i++) {
            for(int j = i;j<s.length();j++) {
                String subStr = s.substring(i,j+1);
                StringBuilder str1 = new StringBuilder(subStr).reverse();
                if(str1.toString().equals(subStr)) {
                    count++;
                }
            }
        }
        
        return count;
    }
}