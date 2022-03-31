class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int rightSum[n];
        rightSum[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--)
            rightSum[i] = rightSum[i+1] + nums[i];
        int maxRight[n];
        maxRight[n-1] = rightSum[n-1];
        for(int i = n-2; i >= 0; i--)
            maxRight[i] = max(maxRight[i+1],rightSum[i]);
        int leftSum = 0, ans = INT_MIN;
        int cur = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            cur = nums[i] + max(cur,0);
            ans = max(ans,cur);
        }
        for(int i = 0; i < n-2; i++)
        {
            leftSum += nums[i];
            ans = max(ans,leftSum + maxRight[i+2]);
        }
        return ans;
    }
};