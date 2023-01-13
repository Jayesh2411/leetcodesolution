class Solution {
    public boolean isPalindrome(String s) {
       String res = s.toLowerCase();
        int left = 0;
        //res.toCharArray();
        int right = res.length()-1;
        while(left < right){
            if(res.charAt(left) < '0' || (res.charAt(left) > '9' && res.charAt(left)<'a') || res.charAt(left)>'z'){
                left++;
                continue;
            }else if(res.charAt(right) < '0' || (res.charAt(right) > '9' && res.charAt(right)<'a') || res.charAt(right)>'z'){
                right--;
                continue;
            }
            if(res.charAt(left) != res.charAt(right)){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}