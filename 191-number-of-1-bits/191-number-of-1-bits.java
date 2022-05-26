public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int c = 0;
        if(n == 0) {
            return c;
        }
        
        String binaryStr = Integer.toBinaryString(n);
        
        for(int i = 0;i<binaryStr.length();i++) {
            if (binaryStr.charAt(i) == '1') {
                c++;
            }
        }
        
        return c;
    }
}