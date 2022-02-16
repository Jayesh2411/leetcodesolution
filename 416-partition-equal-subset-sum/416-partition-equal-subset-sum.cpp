class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0 ;
        for ( int i : nums )
            sum += i;
        if(sum%2!=0)
            return false;
        bool dp[nums.size()+1][sum/2+1];
        for(int i = 0; i <= nums.size(); i++)
        {
            for(int j = 0; j <= sum/2; j++)
            {
                if(j == 0)
                    dp[i][j] = true;
                if(i == 0)
                    dp[i][j] = false;
            }
        }
        for(int i = 1; i <= nums.size(); i++)
        {
            for(int j = 1; j <= sum/2; j++)
            {
                if(nums[i-1] <= j)
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[nums.size()][sum/2];
        
            
    }
};