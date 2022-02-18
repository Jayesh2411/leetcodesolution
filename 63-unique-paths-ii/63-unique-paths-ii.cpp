/*
 * @lc app=leetcode id=63 lang=cpp
 *
 * [63] Unique Paths II
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n,m;
        n = obstacleGrid.size();
        m = obstacleGrid[0].size();
        int dp[n][m];
        if(obstacleGrid[0][0]==1)
            return 0;
        dp[0][0]=1;
        for( int i = 1; i < n; i++ )
        {
            if(obstacleGrid[i][0] == 1)
                dp[i][0] = 0;
            else
                dp[i][0] = dp[i-1][0];
        }
        for( int j = 1; j < m; j++ )
        {
            if(obstacleGrid[0][j] == 1)
                dp[0][j] = 0;
            else
                dp[0][j] = dp[0][j-1];
        }
        for(int i = 1; i < n; i++ )
        {
            for(int j = 1; j < m; j++ )
            {
                if(obstacleGrid[i][j] == 1)
                    dp[i][j] = 0;
                else
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[n-1][m-1];
    }
};
// @lc code=end

