class Solution {
public:
    vector<int> dp;
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        else if(nums.size()==2)
            return max(nums[0],nums[1]);
        int len=nums.size();
        dp.resize(len+3,-1);
        return robCalc(nums,0);
    }
    int robCalc(vector<int> nums,int i)
    {
        if(i>=nums.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        dp[i]=max(nums[i]+robCalc(nums,i+2),nums[i]+robCalc(nums,i+3));
        dp[i+1]=robCalc(nums,i+1);
        return max(dp[i],dp[i+1]);
    }
};