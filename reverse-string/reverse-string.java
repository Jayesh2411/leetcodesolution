class Solution {
    public void reverseString(char[] s) {
        int f = 0, e = s.length-1;
        while(f<e) {
            char temp = s[f];
            s[f] = s[e];
            s[e] = temp;
            f++;e--;
        }
    }
}