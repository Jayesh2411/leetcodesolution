class Solution {
    public int divide(int dividend, int divisor) {
        long divisorSign = 1;
        long dividendSign = 1;
        if (dividend < 0) {
            dividendSign = -1;
        }
        if (divisor < 0) {
            divisorSign = -1;
        }
        long ans = 0;
        long divisorL = Long.valueOf(divisor*divisorSign);
        long dividendL = Long.valueOf(dividend*dividendSign);
        while(divisorL <= dividendL) {
            long m = 1;
            long temp = divisorL;
            
            while(temp<<1 <= dividendL) {
                 temp = temp<<1;
                 m = m<<1;
            }
            ans += m;
            dividendL -= temp;
        }
        long res = ans*(dividendSign*divisorSign);
        
        if(res >= Integer.MAX_VALUE) {
            return Integer.MAX_VALUE;
        }
        
        return (int) res;
    }
}