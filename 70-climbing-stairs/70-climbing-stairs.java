class Solution {
    int mem[] = new int[50];
    public int climbStairs(int n) {
        if (n <= 1 ){
            return 1;
        }
        if (mem[n-1] == 0) {
            mem[n-1] = climbStairs(n-1);
        } 
         if (mem[n-2] == 0) {
            mem[n-2] = climbStairs(n-2);
        }
        return mem[n-1]+mem[n-2];
    }
}