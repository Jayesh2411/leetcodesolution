class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int sol = 0;
        int dp[s.length()+1];
        memset(dp,0,sizeof(dp));
        for(int i = s.length(); i > 0; i--)
        {
            int prev = 0;
            for(int j = 1; j <= s.length(); j++)
            {
                int temp = dp[j];
                if( s[i-1] == s[j-1])
                {
                    dp[j]=1+prev;
                    sol = max(sol,dp[j]);
                }
                else
                    dp[j] = max(dp[j],dp[j-1]);
                prev = temp;
            }
        }
        return dp[s.length()];
    }
};