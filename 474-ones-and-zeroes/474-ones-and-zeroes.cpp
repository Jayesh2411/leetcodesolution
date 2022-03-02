class Solution {
public:
    int findMaxForm(vector<string>& strs, int n, int m) {
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        int numOnes, numZeroes;
        for(auto s : strs)
        {
            numOnes = numZeroes = 0;
            for(char c : s)
            {
                if(c == '1')
                    numOnes+=1;
            }
            numZeroes = s.length() - numOnes;
            for(int i = m; i >= numOnes; i--)
            {
                for(int j = n; j >= numZeroes; j--)
                {
                    dp[i][j] = max(dp[i][j],dp[i-numOnes][j-numZeroes] + 1);
                }
            }
        }
        return dp[m][n];
    }
};