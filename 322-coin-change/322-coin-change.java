class Solution {
    public int coinChange(int[] coins, int amount) {
        if (amount < 1) return 0;
        
        return calculate(coins, amount, new int[amount]);
    }
    public int calculate(int[] coins, int amount, int count[]) {
        
        if(amount == 0) return 0;
        if(amount < 0) return -1;
        if(count[amount-1] != 0) return count[amount-1];
        int min = Integer.MAX_VALUE;
        for (int coin: coins) {
            int rem = calculate(coins, amount-coin, count);
            if(rem >= 0 && rem < min) {
                min = rem+1;
            }
        }
        return count[amount-1] = (min == Integer.MAX_VALUE) ? -1:min;
    }
    
}