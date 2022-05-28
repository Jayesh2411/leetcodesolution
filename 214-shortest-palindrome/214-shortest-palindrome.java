class Solution {
    public String shortestPalindrome(String s) {
        int n = s.length();
        int i = 0, j = n-1;
        
        while(j>=0) {
            if(s.charAt(i) == s.charAt(j)) {
                i++;
            }
            j--;
        }
        
        if (i == n) {
            return s;
        }
        
        String rev = new StringBuilder(s.substring(i,n)).reverse().toString();
        
        return rev+shortestPalindrome(s.substring(0,i))+s.substring(i);
    }
}
