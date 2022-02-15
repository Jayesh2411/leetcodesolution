class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxSum = nums[0];
        int maxNum = INT_MIN;
        for(int i : nums)
        {
            if(sum + i > 0)
                sum = sum + i;
            else
                sum = 0;
            if(sum > maxSum)
                maxSum = sum;
            if(i > maxNum)
                    maxNum = i;
        }
        if(maxNum < 0)
            return maxNum;
        else
            return maxSum;
    }
};