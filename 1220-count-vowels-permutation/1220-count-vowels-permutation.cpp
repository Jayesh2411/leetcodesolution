#define MAX 1000000007
typedef long long int lli;
class Solution {
public:
    int countVowelPermutation(int n) {
        vector<vector<lli>> dp;
        dp.resize(n+1,vector<lli>(5,0));
        for(int i = 0; i < 5; i++)
            dp[1][i] = 1;
        for(int i = 1; i < n; i++)
        {
            dp[i+1][0] = (dp[i][1] + dp[i][2] + dp[i][4])%MAX;
            dp[i+1][1] = (dp[i][0] + dp[i][2])%MAX;
            dp[i+1][2] = (dp[i][1] + dp[i][3])%MAX;
            dp[i+1][3] = dp[i][2];
            dp[i+1][4] = (dp[i][3] + dp[i][2])%MAX;
        }
        lli ans = 0;
        for(int i = 0; i < 5; i++)
            ans = (ans+dp[n][i])%MAX;
        return ans;
    }
};