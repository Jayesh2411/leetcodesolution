class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int sol = 0;
        int dp[s.length()+1];
        memset(dp,0,sizeof(dp));
        string s1 = s;
        reverse(s1.begin(),s1.end());
        for(int i = 1; i <= s.length(); i++)
        {
            int prev = 0;
            for(int j = 1; j <= s.length(); j++)
            {
                int temp = dp[j];
                if( s[i-1] == s1[j-1])
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