class Solution {
    public int mySqrt(int x) {
        double guess = x/2d;
        double lastVal = (guess + x/guess)/2d; 
        while (true) {
            double currentVal = (lastVal + x/lastVal)/2d;
            if ((int)currentVal == (int)lastVal) {
                break;
            } 
            lastVal = currentVal;
        }
        
        return (int)lastVal;
        
    }
}