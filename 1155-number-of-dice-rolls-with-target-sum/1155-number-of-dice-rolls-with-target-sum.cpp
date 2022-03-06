#define MAX 1000000007
typedef long long int lli;
class Solution {
    vector<vector<lli>> dp;
    lli solve(int n, int k, int target)
    {
        if(n == 0 && target == 0)
            return dp[n][target] = 1;
        if(n == 0 || target == 0)
            return dp[n][target] = 0;
        if(dp[n][target] != - 1)
            return dp[n][target];
        dp[n][target] = 0;
        for(int i = 1; i <= k; i++)
        {
            if(i <= target)
            {
                dp[n][target] += solve(n-1,k,target-i);
                dp[n][target] = dp[n][target]%MAX;
            }
            else
                break;
        }
        return dp[n][target]%MAX;
    }
public:
    int numRollsToTarget(int n, int k, int target) { 
        dp.resize(n+1,vector<lli>(target+1,-1));
        return solve(n,k,target)%MAX;
    }
};