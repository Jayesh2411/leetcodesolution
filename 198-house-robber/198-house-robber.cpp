class Solution {
public:
    
    int rob(vector<int>& nums) {
        vector<int> dp;
        
        int len=nums.size();
        if(len==1)
            return nums[0];
        else if(len==2)
            return max(nums[0],nums[1]);
        dp.resize(len+3,-1);
        dp[0]=nums[0];
        dp[1]=nums[1];
        dp[2]=nums[2]+nums[0];
        int i;
        for(i=3;i<len;i++)
        {
            dp[i]=max(nums[i]+max(dp[i-2],dp[i-3]),dp[i-1]);
        }
        return max(dp[len-1],dp[1]);
    }
};