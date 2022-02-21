class Solution {
public:
    int numSquares(int n) {
        int k = floor(sqrt(n));
        int dp[n+1];
        dp[0] = 0;
        for(int i = 1; i <= n; i++)
            dp[i] = INT_MAX - 1;
        int square[k];
        for(int i = 0; i < k; i++)
            square[i]=pow(i+1,2);
        for( int i = 1; i <= k ; i++)
            for(int j = 1; j <= n; j++)
            {
                if(j >= square[i-1])
                    dp[j] = min( dp[j] , 1 + dp[j - square[i - 1]]);
            }
        if( dp[n] == INT_MAX - 1 )
            return -1;
        return dp[n];
    }
};