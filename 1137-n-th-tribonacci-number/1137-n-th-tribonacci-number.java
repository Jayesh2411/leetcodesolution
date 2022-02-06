class Solution {
    int cache[] = new int[100];
    public int tribonacci(int n) {
        if (n<=1) {
            return n;
        }
        if (n==2) {
            return 1;
        }
        
        if (cache[n-1] == 0) {
            cache[n-1] = tribonacci(n-1);
        }
         if (cache[n-3] == 0) {
            cache[n-3] = tribonacci(n-3);
        }
         if (cache[n-2] == 0) {
            cache[n-2] = tribonacci(n-2);
        }
        return cache[n-1]+cache[n-2]+cache[n-3];
    }
}