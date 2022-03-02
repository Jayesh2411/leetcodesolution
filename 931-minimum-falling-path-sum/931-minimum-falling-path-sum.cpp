class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int dp[matrix.size() + 1];
        memset(dp,0,sizeof(dp));
        for(int i = 1; i <= matrix.size(); i++)
        {
            int prevUp = INT_MAX;
            for(int j = 1; j <= matrix[0].size(); j++)
            {
                int temp = dp[j];
                dp[j] = min(prevUp,dp[j]);
                if( j != matrix[0].size() )
                    dp[j] = min(dp[j],dp[j+1]);
                dp[j] += matrix[i-1][j-1];
                prevUp = temp;
            }
        }
        int ans = INT_MAX;
        for(int i = 1; i <= matrix[0].size(); i++)
            if(ans > dp[i])
                ans = dp[i];
        return ans;
    }
};