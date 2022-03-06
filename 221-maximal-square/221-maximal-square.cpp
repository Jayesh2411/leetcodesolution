class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int dp[matrix[0].size() + 1];
        memset(dp,0,sizeof(dp));
        int maxSol = 0;
        for(int i = 1; i <= matrix.size(); i++)
        {
            int prev = 0;
            for(int j = 1; j <= matrix[0].size(); j++)
            {
                int temp = dp[j];
                if (matrix[i-1][j-1] == '1')
                {
                    dp[j] = min(min(dp[j-1],prev),dp[j])+1;
                    maxSol = max(maxSol,dp[j]);
                }
                else
                    dp[j] = 0;
                prev = temp;
            }
        }
        return maxSol*maxSol;
    }
};