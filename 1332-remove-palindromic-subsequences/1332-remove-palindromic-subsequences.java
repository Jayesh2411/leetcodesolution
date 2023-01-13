class Solution {
    public int removePalindromeSub(String s) {
        if(s == null || s.isEmpty()) {
            return 0;
        }
        if(s.length() == 1){
            return 1;
        }
        int i = 0; int j = s.length()-1;
        while(i < j) {
            if(s.charAt(i) == s.charAt(j)) {
                i++;j--;
            } else{
                return 2;
            }
        }
        return 1;
    }
   
}