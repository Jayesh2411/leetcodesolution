class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& cost) {
        if(days.size() == 1)
            return *min_element(cost.begin(),cost.end());
        int n = days[days.size()-1];
        vector<int> dp(n+1,0);
        int j = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i != days[j])
                dp[i] = dp[i-1];
            else
            {
                dp[i] = dp[i-1] + cost[0];
                dp[i] = min(dp[max(i-7,0)] + cost[1],dp[i]);
                dp[i] = min(dp[max(i-30,0)] +cost[2],dp[i]);
                ++j;
            }
        }
        return dp[n];
    }
};