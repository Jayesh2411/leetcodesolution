class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeons) {
        vector<int> dp(dungeons[0].size()+1,INT_MAX);
        dp[dungeons[0].size()] = dp[dungeons[0].size() - 1] = 0;
        for(int i = dungeons.size() - 1; i >= 0 ; i--)
        {
            for(int j = dungeons[0].size() - 1; j >= 0 ; j--)
            {
                dp[j] = max(min(dp[j+1],dp[j]) - dungeons[i][j],0);
            }
            dp[dungeons[0].size()] = INT_MAX;
        }
        return dp[0]+1;
    }
};