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
            if(sum > maxSum && sum!= 0)
                maxSum = sum;
            if(i > maxSum)
                    maxSum = i;
        }
        return maxSum;
    }
};