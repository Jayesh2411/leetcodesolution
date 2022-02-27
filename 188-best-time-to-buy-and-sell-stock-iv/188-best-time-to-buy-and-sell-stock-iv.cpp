class Solution {
public:
    int maxProfit(int l, vector<int>& prices) {
            if (prices.size() < 2) return 0;
            int dp[l+1];
            int minK[l+1];
            for(int i = 0; i <= l; i++)
            {
                minK[i] = prices[0];
                dp[i]=0;
            }
            for (int i = 0; i < prices.size(); i++)  {
                for (int k = 1; k <= l; k++) {
                    minK[k] = min(minK[k], prices[i] - dp[k-1]);
                    dp[k] = max(dp[k], prices[i] - minK[k]);
                }
            }
            return dp[l];
        }
};