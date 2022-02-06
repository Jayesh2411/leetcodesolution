class Solution {
    int cache[] = new int[100];
    public int fib(int n) {
       
        if (n <= 1) {
            return n;
        }
        if (cache[n-1] == 0) {
            cache[n-1] = fib(n-1);
        }
        if (cache[n-2] == 0) {
            cache[n-2] = fib(n-2);
        }
        return cache[n-1]+cache[n-2];
    }
}