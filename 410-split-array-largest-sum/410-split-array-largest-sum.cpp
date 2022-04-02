class Solution {
    vector<vector<int>> dp;
    int splitArray(vector<int>& nums, int m, int i, int j)
    {
        if(m == 1)
            return accumulate(nums.begin()+i,nums.end(),0);
        if(dp[m-1][i] != -1)
            return dp[m-1][i];
        int ans = INT_MAX, sum = nums[i];
        for(int k = i+1; k <= j-m+1; k++)
        {
            if(dp[m-2][k] == -1)
                dp[m-2][k] = splitArray(nums,m-1,k,j);
            int temp = max(sum,dp[m-2][k]);
            ans = min(ans,temp);
            if(sum > dp[m-2][k])
                break;
            sum += nums[k];
        }
        dp[m-1][i] = ans;
        return ans;
    }
public:
    int splitArray(vector<int>& nums, int m) {
        dp.resize(m,vector<int>(nums.size(),-1));
        return splitArray(nums,m,0,nums.size());
    }
};